
//            problem number 1
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int f[10000]={0};
    for(int i=0; i<n; i++)
    {
        f[arr[i]]=1;
    }
    int s;
    scanf("%d",&s);
    if(f[s]==1)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}







//                      problem number 2
int main(){
    char c[1000];   
    scanf("%s",c);
    int length = strlen(c);

    int f[100000]={0};
    for(int i=0; i<length; i++)
    {
        int index = c[i] - 97;
        f[index] += 1;         
    }

   
    for(int i=0; i<26; i++)
    {
        printf("%c %d\n",97+i, f[i]);
    }
    
}










//                     problem number 3
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
           
        }
    }
    int count_1=0,count_2=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j && arr[i][j]==1)
            {
                count_1++;               
            }
         
            if(i != j && arr[i][j] == 0)
            {
                count_2++;
            }
        }        
    }

    if(count_1 == 3 && count_2 == 6)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}




















//                       problem number 4
#include <stdio.h>
int main()
{
    int n,m,x,y;
    scanf("%d %d %d",&n,&m,&x);
    int arr[n][m];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
           
        }
    }

    int f[10000]={0};
    for(int i=0; i<x; i++)
    {
        scanf("%d",&y);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j] == y)
                {
                    f[y] += 1;
                }
                
            
            }
        }
        printf("%d\n",f[y]);
    }

    

    return 0;
}












//                 problem number  5
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int f[1000000]={0};
    int counter=0;
    for(int i=0;i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}






//                       problem number 6
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int f[1000000]={0};
    int counter=0;
    for(int i=0;i<n; i++)
    {
        f[arr[i]] +=1;
    }
    for(int i=0; i<100000; i++)
    {
        if(f[i]==1)
        {
            counter++;
        }
    }

    printf("%d",counter);

    return 0;
}










// Problem 6: Dynamic array resizing with malloc and realloc
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Initial allocation of memory for 5 integers
    int *arr = (int *)malloc(5 * sizeof(int));

    // Initialize the array with values 1 to 5
    for(int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // Print the initial array
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Resize the array to hold 10 integers
    int *temp = arr; // Store the original array pointer
    arr = (int *)realloc(arr, 10 * sizeof(int));

    // Initialize the new part of the array with values 6 to 10
    for(int i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }

    // Print the resized array
    for(int i = 5; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Free the memory and print the array (undefined behavior)
    free(arr); 
    printf("\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]); // Undefined, as memory is freed
    }
    return 0;
}

// Problem 7: Reading dynamic array size using realloc
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n); // Read the number of elements
    int length = 1;
    int *arr = (int *)malloc(length * sizeof(int)); // Allocate initial memory for 1 integer

    // Read and store integers in dynamically allocated memory
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the element
        arr = (int *)realloc(arr, length++ * sizeof(int)); // Resize the array
    }

    // Print the stored integers
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Problem 8: Calculate the absolute difference between two integers using pointers
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    int *x = &a, *y = &b; // Declare pointer variables
    scanf("%d %d", x, y); // Read two integers

    int difference = abs(*x - *y); // Calculate the absolute difference
    printf("%d", difference); // Print the absolute difference
    
    return 0;
}



