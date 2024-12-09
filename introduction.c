// Practice Number 1
#include <stdio.h>

int main() {
    // Printing a message to the console
    printf("hello Md.Ruhul Amin 5435 !@$^%@%!!");
    return 0;  // Return 0 to indicate successful execution
}

/*
Explanation:
- This simple program demonstrates how to print a string with a combination of text and special characters using the printf() function.
- #include<stdio.h> includes the standard input/output library for printf.
- The message "hello Md.Ruhul Amin 5435 !@$^%@%!!" is printed to the console.
*/




// Practice Number 2
int main() {
    int a = 5;
    // Adding 100 to the value of a and printing the result
    printf("%d", a + 100);
    return 0;
}

/*
Explanation:
- This program declares an integer variable 'a' and initializes it with 5.
- The result of adding 100 to 'a' (i.e., 105) is printed using printf.
*/


// Practice Number 3
int main() {
    int a, b, c;
    // Reading three integer values from the user
    scanf("%d %d %d", &a, &b, &c);
    // Calculating the result of (a^2 + 2ab + b^2) % c
    int result = (a * a + 2 * a * b + b * b) % c;
    printf("%d", result);  // Printing the result
    return 0;
}

/*
Explanation:
- This program reads three integers (a, b, c) from the user.
- It then calculates the expression (a^2 + 2ab + b^2) and computes the remainder when the result is divided by 'c' using the modulo operator.
*/


// Practice Number 4
int main() {
    int a = 10;
    a--;  // Decrement 'a' by 1 (a becomes 9)
    // Printing the sum of two incremented values of 'a'
    printf("%d", ++a + ++a);
    return 0;
}

/*
Explanation:
- The variable 'a' is initialized to 10, then decremented to 9.
- The expression ++a + ++a increments 'a' twice before adding the values.
- The result depends on the order of the increments and can vary based on compiler behavior.
*/


// Practice Number 5
int main() {
    int a, b;
    // Reading two integer values from the user
    scanf("%d %d", &a, &b);
    // Printing the remainder of 'a' divided by 'b'
    printf("%d\n", a % b);

    // Checking if 'a' is divisible by 'b' or vice versa
    if (a % b == 0 || b % a == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}

/*
Explanation:
- This program reads two integers 'a' and 'b' from the user.
- It first prints the remainder when 'a' is divided by 'b'.
- It then checks if either 'a' is divisible by 'b' or 'b' is divisible by 'a' and prints "Yes" or "No".
*/


// Practice Number 6
#include <string.h>
int main() {
    char a[50];
    // Reading a string from the user
    scanf("%s", a);
    printf("Destination is: %s\n", a);

    // Checking destination and printing the corresponding price
    if (strcmp(a, "santahar") == 0) {
        printf("Price is: 430 BDT\n");
    } else if (strcmp(a, "akkelpur") == 0) {
        printf("Price is: 450 BDT\n");
    } else if (strcmp(a, "natore") == 0) {
        printf("Price is: 390 BDT\n");
    } else if (strcmp(a, "pabna") == 0) {
        printf("Price is: 330 BDT\n");
    } else if (strcmp(a, "jashore") == 0) {
        printf("Price is: 480 BDT\n");
    } else if (strcmp(a, "khulna") == 0) {
        printf("Price is: 560 BDT\n");
    } else if (strcmp(a, "kustia") == 0) {
        printf("Price is: 380 BDT\n");
    } else if (strcmp(a, "ishwardhi") == 0) {
        printf("Price is: 290 BDT\n");
    } else {
        printf("Not Available Train This Route\n");
    }
    return 0;
}

/*
Explanation:
- The program reads a destination string from the user.
- It then compares the destination with predefined options using the strcmp function.
- If a match is found, the corresponding price is printed; otherwise, a message indicating the route is unavailable is displayed.
*/


// Practice Number 8
int main() {
    int a;
    // Reading the grade number from the user
    scanf("%d", &a);

    // Using a switch statement to print the grade based on the input number
    switch (a) {
        case 80:
            printf("Your Grade: A+");
            break;
        case 70:
            printf("Your Grade: A");
            break;
        case 60:
            printf("Your Grade: B");
            break;
        case 50:
            printf("Your Grade: C");
            break;
        case 40:
            printf("Your Grade: D");
            break;
        case 33:
            printf("Failed");
            break;
        default:
            printf("Invalid Number");
    }
    return 0;
}

/*
Explanation:
- This program reads an integer 'a' and uses a switch statement to check the value.
- Based on the value of 'a', it prints the corresponding grade (e.g., "A+", "A", etc.).
- If the value doesn't match any of the cases, it prints "Invalid Number".
*/
