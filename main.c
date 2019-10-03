#include <stdio.h>
#include "header.h"

int main() {

    FILE *infile = NULL;
    infile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab6Part3\\input.txt", "r");

    int n = readIntegerFromFile(infile);

    printResult(n);

    return 0;
}