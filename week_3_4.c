
// week____4, frequency arrayyyy

//                       problem number 1
#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int f[100000];
    for(int i=0; i<n; i++)
    {
        f[arr[i]] += 1;
    }
    for(int i=0; i<100; i++)
    {
        if(f[i]>=1)
        {
            printf("%d %d\n",i,f[i]);
        }
        
    }
}





//                  problem number 2
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int len = strlen(str);
    int f[26]={0};
    for(int i=0; i<len; i++)
    {
        char ch = str[i];
        int index = ch - 'a';
        printf("%d ",index);
        f[index] = 1;
    }
    for(int i=0;i<=n; i++)
    {
        printf("%d %c\n",f[i],97+i);
    }
    printf("%s",str);
}










//                    problem number 3
#include <stdio.h>
int f[100005]={0};
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        f[arr[i]] += 1;
    }
    
    for(int i=1; i<=m; i++)
    {
        printf("%d\n",f[i]);
    }
    return 0;
}






//                     problem number 4

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}












//                    problem number 5
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+5][n+5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int primary_d = 0, secondary_d = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                primary_d += a[i][j];
            }
            if(i+j == n - 1)
            {
                secondary_d += a[i][j];
            }
        }
    }
    int differ = abs(primary_d - secondary_d);
    printf("%d",differ);
    return 0;
}





//                     problem number 6

#include <stdio.h>
int f[100005]={0};
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        f[a[i]] += 1;
    }
    for(int i=1; i<=m; i++)
    {
        printf("%d\n",f[i]);
    }
}













//                   problem number 7
#include <stdio.h>
int f[26]={0};
int main()
{
    char str[1000005];
    scanf("%1000000s",str);
    for(int i=0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        int index = ch - 'a';
        f[index] += 1;
    }
    for(int i=0; i<26; i++)
    {
        if(f[i] > 0)
        {
            printf("%c : %d\n",i+'a',f[i]);
        }
        
    }
    
    return 0;
}











//                     problem number 8
#include <stdio.h>

int main(){
    int n,m,x;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    scanf("%d",&x);
    int is_present = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            // printf("%d ",a[i][j]);
            if(a[i][j] == x)
            {
                is_present = 1;
            }        
        }
    }
    if(is_present == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }  
    return 0;
    
}










//                 problem number  9
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int p_diff = 0, s_diff = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                p_diff += a[i][j];
            }
            if(i+j == n-1)
            {
                s_diff += a[i][j];
            }
        }
    }
    int different = abs(p_diff - s_diff);
    printf("%d",different);
}










//                        problem number 10


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a = (int *)malloc(5 * sizeof(int));
    for(int i=0; i<5; i++)
    {
        a[i] = i+1;
    }
    
    int *temp = a;
    a = (int *)realloc(a,10*sizeof(int));
    if(a == NULL)
    {
        a = temp;
    }    
    for(int i=5; i<10; i++)
    {
        a[i] = i+1;
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
   
    
}








//                  problem number 11
#include <stdio.h>

int add(int x,int y){
    int sum = 0;
    int *add_sum = &sum;
    *add_sum = x + y;
    return *add_sum;

}
int main(){
    int a,b;
    int *x = &a, *y = &b;
    scanf("%d %d",x,y);
    int result = add(*x,*y);    
    printf("%d",result);
    return 0;
    
}







//                  problem number 12
#include<stdio.h>
int main(){
    int a,b;
    int *x = &a, *y = &b;
    scanf("%d %d",x,y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d",*x,*y);
    return 0;
}









//                problem number 13
#include <stdio.h>

int main(){
    int a,b,c;
    int *x = &a, *y = &b, *z = &c;
    scanf("%d %d %d",x,y,z);
    if(*x <= *y && *x <= *z)
    {
        printf("%d ",*x);
    }
    else if(*y <= *x && *y <= *z)
    {
        printf("%d ",*y);
    }
    else
    {
        printf("%d ",*z);
    }

    if(*x >= *y && *x >= *z)
    {
        printf("%d",*x);
    }
    else if(*y >= *x && *y >= *z)
    {
        printf("%d",*y);
    }
    else
    {
        printf("%d",*z);
    }
    return 0;
}







//                         problem number 14
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    long long sum = 0;
    scanf("%d",&n);
    int *a=(int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n; i++){
        sum += a[i];
    }
    if(sum < 0)
    {
        sum = sum * -1;
    }
    printf("%lld",sum);
    return 0;

}




//                      problem number 15
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int *a = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] < 0)
        {
            a[i] = 2;
        }       
        else if(a[i] > 0)
        {
            a[i] = 1;
        }
        printf("%d ",a[i]);
    }
    return 0;
}











//                problem number 16
#include <stdio.h>
#include <string.h>
char str[10000001];
int f[26]={0};
int main(){    
    scanf("%s",&str);
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
       
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
        {
            int index = ch -'a';
            f[index] += 1;
        }
        
    }
    for(int i=0; i<26; i++)
    {
        if(f[i]>0)
        {
            printf("%c : %d\n",i+'a',f[i]);
        }
    }
    return 0;
   
   
}

