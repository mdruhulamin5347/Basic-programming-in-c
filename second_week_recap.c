


//                       problem number 1
#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c",ch-32);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    

    return 0;
}




//                    problem number 2
#include <stdio.h>

int main() {
    int a,b;
    char ch;
    scanf("%d %c %d",&a, &ch, &b);
    if( ch == '>' && a > b)
    {
        printf("Right");
    }
    else if(ch == '<' && a < b)
    {
        printf("Right");
    }
    else if(ch== '=' && a==b)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }
    

    return 0;
}







//                     problem number  3 
#include <stdio.h>

int main() {
    int a,b,c;
    char s,q;
    scanf("%d %c %d %c %d",&a, &s, &b, &q, &c);
    if( s == '+')
    {
        if(a+b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a + b);
        }
    }
    else if( s == '-')
    {
        if(a-b==c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a - b);
        }
    }
    else if( s == '*')
    {
        if(a*b==c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a * b);
        }
    }
    

    return 0;
}




//                 problem number 4
#include <stdio.h>

int main() {
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    if(a%k==0 && b%k==0)
    {
        printf("Both");
    }
    else if(a%k==0)
    {
        printf("Memo");
    }
    else if(b%k==0)
    {
        printf("Momo");
    }
    else if(a%k != 0 && b%k != 0)
    {
        printf("No One");
    }
    

    return 0;
}





//       problem number 5
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c)
    {
        printf("%d\n",a);
        if(b<=c)
        {
            printf("%d\n",b);
            if(b<=c)
            {
                printf("%d\n",c);
            }
            else
            {
                printf("%d\n",b);
            }
            
        }
        else
        {
            printf("%d\n",c);
            if(b<=c)
            {
                printf("%d\n",c);
            }
            else
            {
                printf("%d\n",b);
            }
        }
    }
    else if(b<=a && b<=c)
    {
        printf("%d\n",b);
        if(a<=c)
        {
            printf("%d\n",a);
            if(a<=c)
            {
                printf("%d\n",c);
            }
            else
            {
                printf("%d\n",a);
            }
        }
        else
        {
            printf("%d\n",c);
            if(a<=c)
            {
                printf("%d\n",c);
            }
            else
            {
                printf("%d\n",a);
            }
        }
    }
    else
    {
        printf("%d\n",c);
        if(a<=b)
        {
            printf("%d\n",a);
            if(a<=b)
            {
                printf("%d\n",b);
            }
            else
            {
                printf("%d\n",a);
            }
        }
        else
        {
            printf("%d\n",b);
            if(a<=b)
            {
                printf("%d\n",b);
            }
            else
            {
                printf("%d\n",a);
            }
        }
        
    }
    printf("\n%d\n%d\n%d\n",a,b,c);
    

    return 0;
}