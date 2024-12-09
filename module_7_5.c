
//                  problem number 1
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    long long int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }
    if(sum<0)
    {
        sum = sum * -1;
    }
    printf("%lld ",sum);
}





//                    problem number 2
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int x;
    scanf("%d",&x);
    int index = -1;
    for(int i=0; i<n; i++)
    {
        if(x==a[i])
        {
            index = i;
            break;
        }
    }
    printf("%d",index);
}





//                 problem number 3
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        if(0<a[i])
        {
            a[i]=1;
        }
        else if(0>a[i])
        {
            a[i]=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}






//                  problem number 4

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<=10)
        {
            printf("A[%d] = %d\n",i,a[i]);
        }
    }
}







//                  problem number 5
#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min = INT_MAX;
    int position;
    for(int i=1; i<=n; i++)
    {        
        if(a[i]<min)
        {
            min = a[i];
            position = i;
        }        
    }
    printf("%d %d",min,position);
}






//                         prolbem number 6
#include <stdio.h>

#include<stdio.h>
int main(){
    int n,IsPrime;
    scanf("%d",&n);
    
    for(int i=2; i<=n; i++)
    {
        IsPrime = 1;
        for(int j=2; j*j<=i; j++)
        {
            if(i % j == 0)
            {
                IsPrime = 0;
                break;
            }
        }
        if(IsPrime)
        printf("%d\n",i);
    }
           
    
    
    return 0;
}



//                     prolem number 7
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
           
    
    
    return 0;
}



//                   problem number 8
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            char ch = 'A' + i -1;
            printf("%c ",ch);
        }
        printf("\n");
    }
           
    
    
    return 0;
}





//                  problem  number 9

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++)
    {
        for(int k=i; k<=n*2-i; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=i*2-1; j++)
        {
            
            printf("* ");
        }
        printf("\n");
    }
           
    
    
    return 0;
}