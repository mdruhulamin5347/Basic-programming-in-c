// Problem 1: Sum of odd numbers between two numbers
#include <stdio.h>
int main() {
    int t; // Number of test cases
    scanf("%d", &t);
    for (int j = 1; j <= t; j++) {
        int x, y, sum = 0;
        scanf("%d %d", &x, &y);
        // Ensure x is smaller than y
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }
        // Find sum of odd numbers between x and y
        for (int i = x + 1; i < y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}

// Problem 2: Sum of first N natural numbers
#include <stdio.h>
int main() {
    int n;
    long long sum = 0; // To handle large sums
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}

// Problem 3: Factorial of a number
#include <stdio.h>
int main() {
    int t; // Number of test cases
    scanf("%d", &t);
    for (int cs = 1; cs <= t; cs++) {
        int n;
        long long mult = 1; // To handle large factorial values
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            mult *= i;
        }
        printf("%lld\n", mult);
    }
    return 0;
}

// Problem 4: Guess the correct number
#include <stdio.h>
int main() {
    int x;
    // Infinite loop until EOF or correct number (1999)
    while (scanf("%d", &x) != EOF) {
        if (x == 1999) {
            printf("Correct\n");
            break; // Exit the loop when correct number is guessed
        } else {
            printf("Wrong\n");
        }
    }
    return 0;
}

// Problem 5: Print rows of numbers
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            printf("%d\n", j); // Print the row number
        }
        printf("\n"); // Separate rows with a newline
    }
    return 0;
}

// Problem 6: Print array elements <= 10
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] <= 10) {
            printf("A[%d] = %d\n", i, a[i]);
        }
    }
    return 0;
}

// Problem 7: Swap max and min in an array
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    // Find max and min
    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    // Replace max with min and vice versa
    for (int i = 0; i < n; i++) {
        if (a[i] == min) a[i] = max;
        else if (a[i] == max) a[i] = min;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

// Problem 8: Check if the smallest number appears odd/even times
#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    // Find the smallest number
    for (int i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
    }
    // Count occurrences of the smallest number
    for (int i = 0; i < n; i++) {
        if (a[i] == min) count++;
    }
    // Print result based on odd/even count
    if (count % 2 != 0) {
        printf("Lucky");
    } else {
        printf("Unlucky");
    }
    return 0;
}
