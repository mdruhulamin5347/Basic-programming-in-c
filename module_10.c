

//          problem number 1

#include <stdio.h>

int main() {
    
    char str[200];
    scanf("%[^\n]s",str);
    printf("%s",str);

    return 0;
}




//            problem number 2
int main() {
    
    char str[200];
    gets(str);
    fputs(str,stdout);

    return 0;
}




//              problem number 3
#include<stdio.h>
int main()
{
    char str[20];
    scanf("%c",&str);
    printf("%s",str);
    return 0;
}




//                  problem number 4
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        int temp = arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n; i++)
    {
        printf("%d ",arr[i]);
    }

   
    return 0;
}





//               problem number 5
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    int count = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1; i<n; i++,j--)
    {       
        if(arr[j] == arr[i])
        {
            count += 1;
        }     
    }

    if(count == n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}







//                  problem number 6
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    char str[100];
    
    for(int i=0; i<t; i++)
    {
        scanf("%s",str);
        int  length=0;
        for(int j=0; str[j] != '\0'; j++)
        {
            length++;
        }
        if(length > 10)
        {
            printf("%c%d%c\n",str[0],length-2,str[length-1]);
        }
        else
        {
            printf("%s\n",str);
        } 
    } 
}





//                   problem number 7

#include<stdio.h>
int main(){
    char str[100001];
    scanf("%s",str);
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ',')
        {
            str[i] = ' ';
        }
        else
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
            else if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
        }
        
    }
    printf("%s",str);
}








//                    problem number 8

#include<stdio.h>
int main(){
    char str[1001];
    scanf("%s",str);
    int length=0,count=0;

    for(int i=0; str[i] != '\0'; i++)
    {        
        length++;
    }
    for(int i=0, j=length-1; i<length; i++, j--)
    {
        if(str[i] == str[j])
        {
            count++;
        }
    }
    if(count == length)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}





// problem number 9
#include<stdio.h>
int main(){
    char str_a[11];
    char str_b[11];
    scanf("%s",str_a);
    scanf("%s",str_b);
    int length_a = 0;
    int length_b = 0;
    for (int i = 0; str_a[i] != '\0'; i++) {
        length_a++;
    }
    for (int i = 0; str_b[i] != '\0'; i++) {
        length_b++;
    }  
    
    printf("%d %d\n",length_a, length_b);
    printf("%s%s\n",str_a,str_b);
    
    int temp = str_b[0];
    str_b[0] = str_a[0];
    str_a[0] = temp;
    
    printf("%s %s\n",str_a, str_b);
    return 0;
}