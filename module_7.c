#include <stdio.h>


// problem number 1

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",&a[i]);
    }

    return 0;
}


// problem number 2

int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        sum += a[i];
    }
    printf("Array Sum: %d\n",sum);
    printf("Array Avg: %d", sum / n);

    return 0;
}


// problem number 3

#include <stdio.h>
#include<limits.h>


int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=INT_MAX, max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("Min:%d\nMax: %d ", min, max);

    return 0;
}

