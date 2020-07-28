/*
Author: Emma dayan z5239740
Date: Jun 11 2020
Lab02: Word Addition
*/


#include <stdio.h>

int main (void) {

    int firstNum;
    int secondNum;
    printf("Please enter two integers: ");
    scanf("%d ", &firstNum);
    scanf("%d", &secondNum);
    
    int sum = firstNum + secondNum;
   
    //printf("%d", firstNum);
    //print out the first number
    
    if (firstNum == 1) {
        printf("one");
    } else if (firstNum == 2) {
        printf("two");
    } else if (firstNum == 3) {
        printf("three");
    } else if (firstNum == 4) {
        printf("four");
    } else if (firstNum == 5) {
        printf("five");
    } else if (firstNum == 6) {
        printf("six");
    } else if (firstNum == 7) {
        printf("seven");
    } else if (firstNum == 8) {
        printf("eight");
    } else if (firstNum == 9) {
        printf("nine");
    } else if (firstNum == 10) {
        printf("ten");
    } else if (firstNum == -1) {
        printf("negative one");
    } else if (firstNum == -2) {
        printf("negative two");
    } else if (firstNum == -3) {
        printf("negative three");
    } else if (firstNum == -4) {
        printf("negative four");
    } else if (firstNum == -5) {
        printf("negative five");
    } else if (firstNum == -6) {
        printf("negative six");
    } else if (firstNum == -7) {
        printf("negative seven");
    } else if (firstNum == -8) {
        printf("negative eight");
    } else if (firstNum == -9) {
        printf("negative nine");
    } else if (firstNum == -10) {
        printf("negative ten");
    } else if (firstNum == 0) {
        printf("zero");
    } else {
        printf("%d", firstNum);
    }
    
    //print out the plus sign
    printf(" + ");
    
    //print out the second number
    if (secondNum == 1) {
        printf("one");
    } else if (secondNum == 2) {
        printf("two");
    } else if (secondNum == 3) {
        printf("three");
    } else if (secondNum == 4) {
        printf("four");
    } else if (secondNum == 5) {
        printf("five");
    } else if (secondNum == 6) {
        printf("six");
    } else if (secondNum == 7) {
        printf("seven");
    } else if (secondNum == 8) {
        printf("eight");
    } else if (secondNum == 9) {
        printf("nine");
    } else if (secondNum == 10) {
        printf("ten");
    } else if (secondNum == -1) {
        printf("negative one");
    } else if (secondNum == -2) {
        printf("negative two");
    } else if (secondNum == -3) {
        printf("negative three");
    } else if (secondNum == -4) {
        printf("negative four");
    } else if (secondNum == -5) {
        printf("negative five");
    } else if (secondNum == -6) {
        printf("negative six");
    } else if (secondNum == -7) {
        printf("negative seven");
    } else if (secondNum == -8) {
        printf("negative eight");
    } else if (secondNum == -9) {
        printf("negative nine");
    } else if (secondNum == -10) {
        printf("negative ten");
    } else if (secondNum == 0) {
        printf("zero");
    } else {
        printf("%d", secondNum);
    }
    
    //print out the equals sign
    printf(" = ");
    
    //print out the sum
    if (sum == 1) {
        printf("one\n");
    } else if (sum == 2) {
        printf("two\n");
    } else if (sum == 3) {
        printf("three\n");
    } else if (sum == 4) {
        printf("four\n");
    } else if (sum == 5) {
        printf("five\n");
    } else if (sum == 6) {
        printf("six\n");
    } else if (sum == 7) {
        printf("seven\n");
    } else if (sum == 8) {
        printf("eight\n");
    } else if (sum == 9) {
        printf("nine\n");
    } else if (sum == 10) {
        printf("ten\n");
    } else if (sum == -1) {
        printf("negative one\n");
    } else if (sum == -2) {
        printf("negative two\n");
    } else if (sum == -3) {
        printf("negative three\n");
    } else if (sum == -4) {
        printf("negative four\n");
    } else if (sum == -5) {
        printf("negative five\n");
    } else if (sum == -6) {
        printf("negative six\n");
    } else if (sum == -7) {
        printf("negative seven\n");
    } else if (sum == -8) {
        printf("negative eight\n");
    } else if (sum == -9) {
        printf("negative nine\n");
    } else if (sum == -10) {
        printf("negative ten\n");
    } else if (sum == 0) {
        printf("zero\n");
    } else {
        printf("%d\n", sum);
    }   
    
    return 0;
}
