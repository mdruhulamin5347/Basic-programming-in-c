//                   problem number 1
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);   // Input for the number of integers
    int sum = 0;       // Initialize sum to 0
    for(int i=1; i<=n; i++)   // Loop through numbers from 1 to n
    {
        if(i%2==0)    // Check if the number is even
        {
            sum += i;  // Add even number to the sum
        }
    }    
    printf("%d",sum);  // Output the sum of even numbers
    return 0;
}

//                   problem number 2

#include <stdio.h>
#include <string.h>

int main(){
    char s[1005];
    char t[1005];
    scanf("%s",s);     // Input first string
    scanf("%s",t);     // Input second string
    int len_s = strlen(s);   // Get length of the first string
    int count = 0;           // Initialize the count of differences
    for(int i=0; i<len_s; i++)    // Loop through the characters of both strings
    {
        if(s[i] != t[i])   // If the characters at the same position are different
        {            
            t[i] = s[i];  // Replace the character in t with s
            count++;       // Increment the count of changes
        }
    }
    int cmp = 1;      // Flag to compare if both strings are now identical
    for(int i=0; i<len_s; i++)
    {
        if(s[i] != t[i])    // Check if any characters are still different
        {
            cmp = 0;        // Set flag to 0 if the strings are not equal
        }
    }

    if(cmp && len_s-1  > count)   // Check if the strings are almost identical (only one change allowed)
    {
        printf("YES");   // If yes, print YES
    }
    else
    {
        printf("NO");    // Otherwise, print NO
    }
    return 0;
}

//                   problem number 3

#include <stdio.h>
#include <string.h>

int main(){
    char s[1005];
    int count=0;   // Initialize count to zero
    scanf("%s",s);   // Input the string
    int len = strlen(s);   // Get the length of the string
    for(int i=0,j=len-1; i<len; i++,j--)    // Loop to compare characters from both ends
    {
        if(s[i] == s[j])   // If the characters are the same
        {
            count++;       // Increment the count
        }
    }
    printf("%d",count);   // Output the count of matching characters from both ends
}

//                   problem number 4
int main(){
    int n;
    scanf("%d",&n);   // Input the size of the array
    int arr[n+5];      // Declare an array to hold n elements
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);   // Input the array elements
    }
    int max = arr[0];       // Initialize max to the first element
    int min = arr[0];       // Initialize min to the first element
    int max_count=0, min_count=0;   // Initialize counters for max and min
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)     // If current element is greater than max
        {            
            max = arr[i];    // Update max to the current element
            max_count++;     // Increment the count of max changes
        }
        if(arr[i] < min)     // If current element is smaller than min
        {
            min = arr[i];    // Update min to the current element
            min_count++;     // Increment the count of min changes
        }
    }
    printf("%d %d",max_count,min_count);  // Output the counts of max and min changes
}

//                   problem number 5

#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);   // Input the dimensions of the 2D array
    int arr[n+5][m+5];       // Declare the 2D array with n rows and m columns
    for(int i=1; i<=n; i++)   // Input the elements of the array
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    int count = 0;  // Initialize the counter for local maxima
    for(int i=1; i<=n; i++)    // Loop through the rows
    {
        for(int j=1; j<=m; j++)    // Loop through the columns
        {
            if(i==1 && j==1)   // Top-left corner check
            {
                if(arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i][j+1])   // Check if it's a local maximum
                {
                    printf("%d %d\n",i,j);
                    count++;
                } 
            }
            if(i > 1 && i<n && j > 1 && j<m)  // Check the middle elements
            {
                if(arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i][j-1] && arr[i][j] > arr[i][j+1])
                {
                    printf("%d %d\n",i,j);
                    count++;
                }  
            }
            // Additional conditions to check the border elements (left, right, top, bottom corners)
            if(i==n && j==m)  // Bottom-right corner check
            {
                if(arr[i][j] > arr[i][j-1] && arr[i][j] > arr[i-1][j])
                {
                    printf("%d %d\n",i,j);
                    count++;
                }  
            }
        }
    }
    if(count)
    {
        printf("%d",count);  // Output the count of local maxima
    }
    else{
        printf("0");  // If no local maxima are found, print 0
    }

    return 0;
}

//                   problem number 6

#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    char s[1001];      // Declare the string to hold input
    int freq[26] = {0};    // Frequency array to hold count of each character
    int count = 0;        // Initialize the count of characters with odd frequencies

    scanf("%s", s);     // Input the string
    int len = strlen(s);   // Get the length of the string

    for (int i = 0; i < len; i++) {
        int index = s[i] - 'a';   // Find the index of the character in the alphabet
        freq[index] += 1;    // Increment the frequency of the character
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {   // If frequency of a character is odd
            count++;     // Increment the count of odd frequencies
        }
    }

    int result;

    if (count > 1) {   // If more than one character has an odd frequency, it's not possible to form a palindrome
        result = count - 1;    // Output the number of characters with odd frequencies minus 1
    } else {
        result = 0;   // If only one or no characters have an odd frequency, it can form a palindrome
    }

    printf("%d\n", result);   // Output the result

    return 0;
}
