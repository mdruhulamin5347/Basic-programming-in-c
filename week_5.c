

//                 problem number 1

#include <stdio.h>

int addition(int x, int y){
    int sum = x + y;
    return sum;
}
int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d",addition(a,b));
    return 0;
}




//                 problem number 2

#include <stdio.h>
int swaping(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}
int main()
{
    int a,b;
    int *x = &a, *y = &b;
    scanf("%d %d",x,y);
    swaping(x,y);
    printf("%d %d",*x, *y);
}










//                 problem number 3
#include <stdio.h>
void recursion(int n){
    if(n==0){
        return;
    }
    printf("I love Recursion\n");
    recursion(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    recursion(n);
}









//                 problem number 4
#include <stdio.h>
void recursion(int a,int n){
    if(n<a){
        return;
    }
    
    recursion(a+1,n);
    printf("%d",a);
    if(a != 1)
    {
        printf(" ");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    recursion(1,n);
}







//                 problem number 5
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
        int index = ch -'a';
        f[index] += 1;
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







//                 problem number 6

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






//                 problem number 7

#include <stdio.h>
void fun_of_arr(int *a, int n){
    for(int i=0; i<=n; i++)
    {
        a[i] += 1;
    }   
}

int main(){
    int n;
    scanf("%d",&n);
    char a[n+5];
    scanf("%s",a);
    fun_of_arr(a,n);
    printf("\n");
    printf("%s",a);
    return 0;
}





//                 problem number 8
#include <stdio.h>
long long fun_of_recur(int n){
    if(n==0){
        return 1;
    }
    return n * fun_of_recur(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld",fun_of_recur(n));
    return 0;
}





//                 problem number 9
#include <stdio.h>
void fun(int n){
    if(n<=0){
        return;
    }
    int r = n % 10;
    fun(n/10);
    printf("%d ",r);    
}
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d",&n);
        fun(n);
        if(n==0){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}








//                 problem number 10
#include <stdio.h>

int fun(int a[], int i,int j){
    if(i > j)
    {
        return 1;
    }
    return a[i] == a[j] && fun(a,i + 1,j - 1);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    if(fun(a,0,n-1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}




//                 problem number 11

#include <stdio.h>
int fun(int a[], int n){
    int index=0;  
    for(int  m=0; m<n/2; m++)
    {
        for(int j=0; j<n;j++)
        {                   
            if(a[j]==0){
                index = j;                
                for(int k=index; k<n-1; k++)
                {
                    a[k] = a[k+1];                
                }
                a[n-1] = 0;                       
            }        
        }
    } 
        

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n);
    return 0;
}







//                 problem number 12
#include <stdio.h>

void min_fun(int a[],int n){
    int min = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d",min);
}
void max_fun(int a[],int n){
    int max = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];            
        }
    }
    printf("%d\n",max);
   
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min_fun(a,n);
    printf(" ");
    max_fun(a,n);
    return 0;
}







//                 problem number 13

#include <stdio.h>

void max_fun(int a[],int i, int n, int *max){
    if(i == n )
    {
        return;
    }
    if(a[i] > *max)
    {
        *max = a[i];
    }    
    max_fun(a,i+1,n,max);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n+5];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int max = a[0];
    max_fun(a,0,n,&max);
    printf("%d",max);
    return 0;
}






//                 problem number 14
#include <stdio.h>
#include <string.h>
void vowels_fun(char str[],int i,int *count, int len){
    if(i==len){
        return;
    }
    if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E'  || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
    {
        *count += 1;
    }
    vowels_fun(str,i+1,count,len);
}
int main(){
    char str[201];
    fgets(str,sizeof(str),stdin);
    int count=0, len = strlen(str);
    vowels_fun(str,0,&count,len);
    printf("%d",count);
    return 0;
}




//                 problem number 15
#include<stdio.h>
int log_fun(long long n){
    if(n <= 1)
    {
        return 0;
    }
    return 1 + log_fun(n / 2);
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%d",log_fun(n));   

    return 0;
}



//                 problem number 16
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    char s[55][55];
    char t[55][55];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s %s",s[i] ,t[i]);
        
    }
    for(int i=0; i<n; i++)
    {
        int len_s = strlen(s[i]);
        int len_t = strlen(t[i]);
        int min_len = 0;
        if(len_s > len_t)
        {
            min_len = len_t;
        }
        else
        {
            min_len = len_s;
        }
        for(int j=0; j<min_len; j++)
        {
            printf("%c%c",s[i][j],t[i][j]);
        }
        
        if(len_s > len_t)
        {
            printf("%s",s[i] + min_len);
        }
        else if(len_t > len_s)
        {
            printf("%s", t[i] + min_len);
        }
        printf("\n");
    }
    return 0;
    
}






//                 problem number 17
#include <stdio.h>
#include <string.h>
int main(){
    char str[10005];
    char s[6]="hello";
    scanf("%s",str);
    int cmp = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        if(str[i] == s[cmp])
        {
            cmp++;
        } 
    }
   
    if(cmp == 5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}






//                 problem number 18
#include <stdio.h>
#include <string.h>
int main(){
    char s[1005];
    char t[1005];
    scanf("%s %s",s,t);
    int s_len  = strlen(s);
    int t_len = strlen(t);    
    printf("%d %d\n",s_len,t_len);
    printf("%s %s",s,t);
    return 0;
}





//                 problem number 19
#include <stdio.h>

void fibonacci(int n,int i,int *a,int *b,int *result){
    if(i>n){
        return;
    }
    if(i==n){
        *result = *a;
    }
    int temp = *a;
    *a = *b;
    *b = *a + temp;
    fibonacci(n,i+1,a,b,result);
}
int main(){
    int n;
    int a=0,b=1;
    int result=0;
    scanf("%d",&n);
    fibonacci(n, 1,&a,&b, &result);
    printf("%d",result);
    return 0;
}






//                 problem number 20
#include <stdio.h>
int main(){
    int a, b;
    int arr[1005];  // Array to store lucky numbers
    int count = 0;
       
    scanf("%d %d",&a,&b);
    for(int j = a; j <= b; j++)
    {
        int checker = 1; 
        int num = j;
        for (; num > 0; num /= 10) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                checker = 0; // Not a lucky number
                break;
            }
        }
        if (checker == 1) {
            arr[count++] = j;
        }
        
    }
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            if (i > 0) printf(" "); // Space between numbers
            printf("%d", arr[i]);
        }
    }
    else
    {
        printf("-1");
    }
    
    return 0;
    
}










//                 problem number 21
#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int is_prime = 0;
    for(int i = 2; i<n ; i++)
    {
        if(n%i==0)
        {
            is_prime = 1;            
        }
    }
    if(!is_prime)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}







//                 problem number 22
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=2){
        printf("2 ");
    }
    for(int i=3; i<=n; i++)
    {
        int is_prime = 1;
    
       for(int j=2; j<i; j++)
       {
           if(i%j==0)
           {
               is_prime = 0;
               break;
           }
       }       
       if(is_prime)
        {
            printf("%d ",i);
        }
    }
    return 0;
}





//                 problem number 23
#include <stdio.h>
int main(){
    int n,m;
    while(1){
        scanf("%d %d",&n,&m);
        if(n<=0 || m<=0)
        {
            break;
        }
        int start = (n < m) ? n : m;
        int end = (n > m) ? n : m;
        int sum =0;
        for(int i=start; i<=end; i++)
        {
            printf("%d ",i);
            sum += i;
        }
        printf("sum =%d\n",sum);
    }
    return 0;   
}