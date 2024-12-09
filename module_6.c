
// problem number 1
#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    
    if(ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if( ch >= 'A' && ch <= 'Z')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }

    return 0;
}







// problem number     2


int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("small number is: %d\n",a);
    }
    else if(b<a && b<c)
    {
        printf("small number is: %d\n",b);
    }
    else
    {
        printf("small number is: %d\n",c);
    }
    if(a>b && a>c)
    {
        printf("large number is: %d\n",a);
    }
    else if(b>a && b>c)
    {
        printf("large number is: %d\n",b);
    }
    else
    {
        printf("large number is: %d\n",c);
    }
    return 0;
}






// problem number 3

#include <stdio.h>

int main(){
    int fast,last;
    scanf("%d %d",&fast, &last);
    for(fast; fast<=last; fast++)
    {
        for(int i=1; i<=10; i++)
        {
            printf("%d   * %3d   = %3d \n",fast,i,fast*i);
        }
        printf("\n");
        
    }
    
    
    return 0;
}



// problem number 4

#include <stdio.h>

int main(){
    int n;
    int EvenCount = 0, OddCount=0,PositiveCount=0,NegetiveCount=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);
        if(x % 2 ==0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }
        if(x>0)
        {
            PositiveCount++;
        }
        else if(x<0)
        {
            NegetiveCount++;
        }
        
    }
    printf("EvenCount: %d\n", EvenCount);
    printf("Oddcount: %d\n",OddCount);
    printf("PositiveCount: %d\n",PositiveCount);
    printf("NegetiveCount: %d\n",NegetiveCount);
    return 0;
}



// problem nubmer 5

#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            printf("0");
        }
        while(0<n)
        {   
            int result = n % 10;
            printf("%d ",result);
            
            n /= 10;
        }
        printf("\n");
        
    }
   
    return 0;
}




// learn contiue keyword

int main(){
    for(int i=0; i<=10; i++)
    {
        if(i>2)
        {
            continue;
        }
        printf("hi ");
    }
    return 0;
}
