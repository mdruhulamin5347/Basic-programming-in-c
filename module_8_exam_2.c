
//                problem number 1

#include<stdio.h>


int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}






//                  problem number 2

#include <stdio.h>

int main() {
    int n,nb;
    int sum_zero = 0, sum_one = 0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&nb);
        if(nb == 0)
        {
            sum_zero +=1;
        }
        else if(nb == 1)
        {
            sum_one += 1;
        }
    }
    printf("%d %d",sum_zero,sum_one);
    

    return 0;
}







//                 problem number 3
int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum_zero = 0, sum_one = 0;
    for(int i=0; i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            sum_zero += 1;
        }
        else if(arr[i]== 1)
        {
            sum_one += 1;
        }
    }
    printf("%d %d",sum_zero,sum_one);
    

    return 0;
}





//                 problem number 4

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(int k=1; k<=n-1; k++)
    {
        for(int m=1; m<=k; m++)
        {
            printf(" ");
        }
        for(int l=1; l<=n-k; l++)
        {
            printf("%d",l);
        }
        printf("\n");
    }

    return 0;
}








//                       problem number 5
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
    int max = INT_MIN;
    
    for(int j=0; j<n; j++)
    {
        if(max < a[j])
        {
            max = a[j];
        }
    }
    for(int l=0 ; l<n ; l++)
    {
        a[l] = max - a[l];
        printf("%d ",a[l]);
    }

    return 0;
}