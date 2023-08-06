#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    // Check if at least one argument is provided
    if (argc < 2) {
        printf("0\n");
        return 0;
    }

    int sum = 0;

    // Iterate through the arguments and add positive numbers
    for (int i = 1; i < argc; i++) {
        char *arg = argv[i];
        bool isPositive = true;

        // Check if the argument contains non-digit characters
        for (int j = 0; arg[j] != '\0'; j++) {
            if (!isdigit(arg[j])) {
                printf("Error\n");
                return 1;
            }
        }

        int num = atoi(arg);

        // Check if the number is positive
        if (num > 0) {
            sum += num;
        }
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}
