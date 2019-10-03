//
// Created by Jordan on 10/3/2019.
//
#include <stdio.h>
#include "header.h"

int calculateFibonacci(int n){
    int a = 1;
    int b = 1;
    int c = 0;
    for(int i = 1; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int readIntegerFromFile(FILE *infile){
    int val = 0;
    fscanf(infile,"%d",&val);
    return val;
}

void printResult(int n){
    int fibonacci = calculateFibonacci(n);
    printf("The results of the fibonacci series to the %dth term is %d",n,fibonacci);
}
