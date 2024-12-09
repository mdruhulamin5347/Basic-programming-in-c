


//                problem number 1
#include <stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            printf("%d ",i);
        }
        for(int i=n-1; i>=1; i--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}



//                problem number 2

#include <stdio.h>
void recursion_1_n(int n){
    if(n==0)
    {
        return;
    }
    recursion_1_n(n-1);
    printf("%d ",n);
}
void recursion_n_1(int n){
    if(n==0)
    {
        return;
    }
    printf("%d ",n);
    recursion_n_1(n-1);
}
int main(){
    int t,n;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        scanf("%d",&n);
        recursion_1_n(n);
        recursion_n_1(n-1);
        printf("\n");
    }
    return 0;
}


//                problem number 3
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int is_jadu = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if( i == j || i+j == n-1)
            {
                if(arr[i][j]!=1)
                {
                    is_jadu = 0;
                }
            }
            else
            {
                if(arr[i][j] != 0)
                {
                    is_jadu = 0;
                }
            }
        }
    }
    if(is_jadu)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}



//                problem number 4
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            int temp;
            if(j==0)
            {
                temp =arr[i][j];
            }
            if(j==0)
            {
                arr[i][j]=arr[i][m-1];
            }
            if(j== m-1)
            {
                arr[i][j]=temp;
            }
        }
        
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int temp_2;
            if(i == 0)
            {
                temp_2 = arr[i][j];
            }
            if(i==0)
            {
                arr[i][j]=arr[n-1][j];
            }
            if(i == 0)
            {
                arr[n-1][j]=temp_2;
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }

    return 0;
}







//                problem number 5


#include <stdio.h>
#include <string.h>
int main() {
    char str_1[105];
    char str_2[105];
    char str_3[105];
    scanf("%s",str_1);
    scanf("%s",str_2);
    scanf("%s",str_3);
    int len = strlen(str_1);
    int count = 0;
    for(int i=0; i<len; i++)
    {
        if(str_1[i] != str_2[i])
        {
            count++;
        }
        if(str_1[i] != str_3[i])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}




//                problem number 6
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    long long m;
    int a,b,c;
    for(int i=1; i<=t; i++)
    {
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        if(m==0)
        {
            printf("0\n");
        }
        for(long long j=1; j<=m; j++)
        {
            long long mul = (1LL * a * b * c);
            
            if((1LL * mul * j) == m)
            {
                printf("%lld\n",j);
                break;
            }
            if((1LL * mul * j ) != m && j == m)
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}













//                problem number 7
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    long long m;
    int a,b,c;
    for(int i=1; i<=t; i++)
    {
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        
        long long multi = (1LL * a * b * c);
            
        if(m % multi == 0)
        {
            printf("%lld\n",m / multi);
            
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}