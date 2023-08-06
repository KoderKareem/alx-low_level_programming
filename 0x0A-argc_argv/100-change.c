#include <stdio.h>
#include <stdlib.h>
/*
 * main: This program wiil multiplies two numbers.
 * 
 * @argc: Argument count
 * @argv: Argument arrasy
 */
int main(int argc, char *argv[]) {
    // Check if exactly one argument is provided
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    // Convert the argument to an integer
    int cents = atoi(argv[1]);

    // Check if the number is negative
    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    // Calculate the minimum number of coins
    int numCoins = 0;
    int coinValues[] = {25, 10, 5, 2, 1};
    int numCoinValues = sizeof(coinValues) / sizeof(coinValues[0]);

    for (int i = 0; i < numCoinValues; i++) {
        numCoins += cents / coinValues[i];
        cents %= coinValues[i];
    }

    // Print the result
    printf("%d\n", numCoins);

    return 0;
}
