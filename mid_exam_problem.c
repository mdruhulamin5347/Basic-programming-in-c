#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Problem 1: Print numbers from 1 to k for each row (n times)
int main() {
    int n, k; // Declare variables for rows (n) and columns (k)
    scanf("%d", &n); // Read the number of rows
    scanf("%d", &k); // Read the number of columns

    // Outer loop for rows (n)
    for(int i = 0; i < n; i++) {
        // Inner loop for columns (1 to k)
        for(int j = 1; j <= k; j++) {
            printf("%d ", j); // Print the number j in the current row
        }
        printf("\n"); // Move to the next line after printing all columns
    }
    return 0;
}

// Problem 2: Calculate how many books can be read within a given time
int main() {
    int n, t, read_time, total_read = 0; // Declare variables for number of books, total time, and count of books read
    scanf("%d %d", &n, &t); // Read the number of books and total time available
    long long sum = 0; // Initialize the sum of reading times to 0

    // Loop through each book
    for(int i = 1; i <= n; i++) {
        scanf("%d", &read_time); // Read the time required to read the current book
        sum += read_time; // Add the read time of the book to the sum

        if(sum <= t) { // If the accumulated time is less than or equal to total available time
            total_read++; // Increment the count of books that can be read
        }
    }
    printf("%d", total_read); // Print the total number of books that can be read
    return 0;
}

// Problem 3: Count how many phone prices are within a given range
int main() {
    int n, x, y, phone_price, count = 0; // Declare variables for number of phones, price range, and count
    scanf("%d %d %d", &n, &x, &y); // Read the number of phones and the price range (x to y)

    // Loop through each phone
    for(int i = 1; i <= n; i++) {
        scanf("%d", &phone_price); // Read the price of the current phone
        if(phone_price >= x && phone_price <= y) { // If the price is within the range
            count++; // Increment the count
        }
    }
    printf("%d", count); // Print the total number of phones within the price range
    return 0;
}

// Problem 4: Classify candidates based on their experience level
int main() {
    int n, ex; // Declare variables for the number of candidates and their experience
    scanf("%d", &n); // Read the number of candidates

    // Loop through each candidate
    for(int i = 1; i <= n; i++) {
        scanf("%d", &ex); // Read the experience of the current candidate
        // Classify based on experience level
        if(ex < 1) {
            printf("Entry-level candidate\n");
        }
        if(ex >= 1 && ex <= 3) {
            printf("Junior candidate\n");
        }
        if(ex >= 4 && ex <= 7) {
            printf("Mid-level candidate\n");
        }
        if(ex >= 8) {
            printf("Senior candidate\n");
        }
    }
    return 0;
}

// Problem 5: Compare three strings lexicographically and print them in order
#include <stdio.h>
#include <string.h>
int main() {
    char s1[1001], s2[1001], s3[1001]; // Declare three string variables
    scanf("%s %s %s", s1, s2, s3); // Read the three strings

    // Compare the strings and store the results in variables
    int num1 = strcmp(s1, s2);
    int num2 = strcmp(s1, s3);
    int num3 = strcmp(s2, s3);
    int num4 = strcmp(s2, s1);
    int num5 = strcmp(s3, s1);
    int num6 = strcmp(s3, s2);

    // Print the lexicographically smallest string
    if(num1 <= 0 && num2 <= 0) {
        printf("%s\n", s1);
    } else if(num3 <= 0 && num4 <= 0) {
        printf("%s\n", s2);
    } else if(num5 <= 0 && num6 <= 0) {
        printf("%s\n", s3);
    }

    // Print the lexicographically largest string
    if(num1 >= 0 && num2 >= 0) {
        printf("%s\n", s1);
    } else if(num3 >= 0 && num4 >= 0) {
        printf("%s\n", s2);
    } else if(num5 >= 0 && num6 >= 0) {
        printf("%s\n", s3);
    }
    return 0;
}

