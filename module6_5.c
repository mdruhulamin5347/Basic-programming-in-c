// Online C compiler to run C program online



// problem number 1
#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'z')
    {
        printf("a");
    }
    else
    {  
        int next = ch + 1;
        printf("%c",next);
    }
    return 0;
    
}



// problem number 2

#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a+b+c)==d || (a-b-c)==d || (a+b-c)==d || (a-b+c)==d || (a*b*c)==d || (a+(b*c))==d || ((a*b)+c)==d || ((a*b)-c)==d || ((b*c)-a)==d)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
    
}



// problem number 3

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    
    return 0;
    
}


// problem number 4

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        
        if(n==1)
        {
            printf("-1\n");
        }
        else if(i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
    
}