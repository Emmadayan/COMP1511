// Author: Emma Dayan z5239740
// Date: July 2020
// UNSW Freefall assignment.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 15
#define EMPTY 0
#define STONE 1

// TODO: Add any extra #defines here.
#define FIRE 3

void printMap(int map[SIZE][SIZE], int playerX);

// TODO: Add any extra function prototypes here.
int movePlayer(int direction, int playerX);
int shiftDown (int map[SIZE][SIZE], int endGame);
int verticalFlip (int map[SIZE][SIZE], int flipped);
int fireLaser (int map[SIZE][SIZE], int endGame, int playerX);
void tntBlock (int map[SIZE][SIZE], int x, int y);


int main (void) {
    // This line creates our 2D array called "map" and sets all
    // of the blocks in the map to EMPTY.
    int map[SIZE][SIZE] = {EMPTY};

    // This line creates out playerX variable. The player starts in the
    // middle of the map, at position 7.
    int playerX = SIZE / 2;

    int numLines;
    printf("How many lines of stone? ");
    // TO DO: Scan in the number of lines of blocks.
    scanf("%d", &numLines);
    //variables referring to the location of stones
    int row;
    int col;
    int length;
    int value;
    printf("Enter lines of stone:\n");
    // TO DO: Scan in the lines of blocks.
    int i = 0;
    while (i < numLines) {
        scanf("%d %d %d %d", &row, &col, &length, &value);
        /*
        TO DO: validity checks
        //checks that all stones are in fact in the grid
        if they are not the input line is simply disregarded
        */
        if (row >= 0 
            && col >= 0 
            && row < SIZE 
            && col < SIZE 
            && length <= SIZE 
            && col+length <= SIZE) {
            //populate the map with STONES
            int j = col;
            while (j < col + length) {
                map[row][j] = value;  
                j++;
            }
        }       
        i++;        
    }

    printMap(map, playerX);
   
    

    // TODO: Scan in commands until EOF.
    // After each command is processed, you should call printMap.
    int action;
    int endGame = 0;
    int flipped = 0;
    
    while (endGame == 0 && scanf("%d", &action) != EOF) {

        if (action == 1) {  
            //scan in a -1 to move to the left or a 1 to move to the right        
            int direction;
            scanf("%d", &direction);
            playerX = movePlayer(direction, playerX);
        } else if (action == 2) {
            //fire to destroy stones
            endGame = fireLaser(map, endGame, playerX);
        } else if (action == 3) {
            //move down the stones and detect if game is lost
            endGame = shiftDown(map, endGame);
        } else if (action == 4 && flipped == 0) {
            //vertically flip the map
            flipped = verticalFlip(map, flipped);
        } 
        printMap(map, playerX);
        
        //end game conditions
        if (endGame == 1) {
            printf("Game Lost!\n");
        } else if (endGame == 2) {
            printf("Game Won!\n");
        }
    }
    
    
    return 0;
}

// Print out the contents of the map array. Then print out the player line
// which will depends on the playerX variable.
void printMap(int map[SIZE][SIZE], int playerX) {
    
    // Print values from the map array.
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            printf("%d ", map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }    
    
    // Print the player line.
    i = 0;
    while (i < playerX) {
        printf("  ");
        i++;
    }
    printf("P\n");
}


int movePlayer(int direction, int playerX){
    /*
    scan 2 numbers, a 1 and either another 1 or a -1 for direction 
    if second number is not a 1 or -1 invalid and dont move player
    */ 
    if (direction == 1) {
        playerX = playerX + 1;
    } else if (direction == -1) {
        playerX = playerX - 1; 
    } 
    return playerX;
}


int shiftDown(int map[SIZE][SIZE], int endGame) {
    int j = SIZE - 1;
    //if there are stones in the bottom row when attempting to move down...
    while (j > 0) {
        if (map[SIZE-1][j] == 1) {
            //lose game
            endGame = 1;
        } 
        j--;
    }
    int i = SIZE - 1;
    if (endGame == 0) {
        while (i > 0) {
            j = SIZE - 1;
            while (j >= 0) {
                //move down each line of stone
                map[i][j] = map[i - 1][j];
                //and the top line is filled EMPTY
                map[0][j] = 0;
                j--;
            }
            i--;
        }
    }
    return endGame;
}


int verticalFlip (int map[SIZE][SIZE], int flipped) {
    int tempMap[SIZE][SIZE] = {EMPTY};
    int i = SIZE - 1;
    while (i > 0) {
        int j = SIZE - 1;
        while (j > 0) {
            //assign flipped values to temp array
            tempMap[i + SIZE - (2 * i)-1][j] = map[i][j];
            j--;
        }
        i--;
    }
    i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            //assign values from temp array back to map = flipped map  
            map[i][j] = tempMap[i][j];
            j++;
        }
        i++;
    }
    flipped = 1;
    return flipped;
}


int fireLaser (int map[SIZE][SIZE], int endGame, int playerX) {
    int i = SIZE-1;
    int stonesDestroyed = 0;
    while (i >= 0 && stonesDestroyed < FIRE) {
        /* if the encountered coordinate is a 1 (STONE) explode 
        the stone and the coordinate becomes 0 (EMPTY)*/
        if (map[i][playerX] == STONE) {
            map[i][playerX] = EMPTY;
            //When stonesDestroyed gets to 3, stop destroying
            stonesDestroyed ++; 
            //but if there's a dynamite block...
        } else if (map[i][playerX] >= 3 && map[i][playerX] <= 9) {
            stonesDestroyed = FIRE;
            int y = i; 
            int x = playerX;
            tntBlock(map, x, y);
        }
        i--;
    }
    i = 0;
    //assume all stones gone in which case game would be won
    endGame = 2;
    //but if there are any stones still on the board...
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            if (map[i][j] > 0) {
                endGame = 0; //game not over
            }
            j++;
        }
        i++;
    }

    return endGame;    
}


void tntBlock (int map[SIZE][SIZE], int x, int y) {
    //to ensure the shooting stops at the dynamite block 
    //(even if its the second of three coordinates that can 
    //be shot)
    //store value and coordinates of tnt block
    int tnt = map[y][x]; 
    int j = 0;
    while (j < SIZE) {
        int i = 0;
        while (i < SIZE) {
            double distance = 
            sqrt((y - j)*(y - j) + (x - i) * (x - i));
            if (distance < tnt) {
                map[j][i] = EMPTY;
            }
            i++;
        }
        j++;
    }
}