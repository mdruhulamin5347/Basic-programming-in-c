


//               1. copy array use manualy

#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr_b[n];
    for(int i=0; i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        arr_b[i]=arr[i];
    }
    printf("arry b value is: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr_b[i]);
    }
}





//                 2.array data insertion

int main(){
    int length;
    scanf("%d",&length);
    int arr_a[length];
    
    for(int i=0; i<length; i++)
    {
        scanf("%d",&arr_a[i]);
    }
    int index,value;
    scanf("%d %d",&index, &value);
 
    length++;
    for(int i=length - 1; i>=index; i--)
    {
        arr_a[i + 1] = arr_a[i];
      
    }
    arr_a[index]=value;   


    for(int i=0; i<length; i++)
    {
        printf("%d ",arr_a[i]);
    }

}


//                      3.array data delete

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int index;
    scanf("%d",&index);
    for(int i=index; i<n-1 ; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}


//                        4.array reverse


int main(){
    int n;
    scanf("%d",&n);
    int arr_a[n];
    int arr_b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr_a[i]);
    }
    for(int i=0,j=n-1; i<n; i++,j--)
    {
        arr_b[i]=arr_a[j];
    }
    for(int i=0;i<n; i++)
    {
        arr_a[i]=arr_b[i];
       
    }
    printf("\n");
    for(int i=0;i<n; i++)
    {
     
        printf("%d ",arr_a[i]);
    }
}



//                     5.one array use for reverse


int main(){
    int n;
    scanf("%d",&n);
    int arr_a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr_a[i]);
    }
    for(int i=0,j=n-1; i<j; i++,j--)
    {
        int temp = arr_a[j];
        arr_a[j]=arr_a[i];
        arr_a[i]=temp;
        
    }

    printf("\n");
    for(int i=0;i<n; i++)
    {
     
        printf("%d ",arr_a[i]);
    }
}



                // str to digit / string input output
                // compare two string
                // reverse / length / copy / concate 



int main(){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int digit=0;
    for(int i=0; i<n; i++)
    {
        int num = str[i] - '0';
        digit = digit * 10 + num;       
    }
    printf("%d",digit);
}




//              7.string letter compare
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    char b[100];
    scanf("%s",b);
    int cm = strcmp(b,a);
    printf("%d",cm);
}







//                 8. 2 string word sort by manualy
int main(){
    char a[21];
    scanf("%s",a);
    char b[21];
    scanf("%s",b);
    int length = strlen(a);
    int length_b = strlen(b);
    int cmp;
    int count=0;
    for(int i=0; i<length; i++)
    {
        if(a[i]<b[i])
        {           
            cmp = 1;
            break;           
            printf("1");
        }
        else if(a[i]>b[i])
        {
            cmp = -1;
            break;
            printf("-1");
        }
        else if(a[i]==b[i])
        {
            count++;  
            cmp=0;                    
        }
    }

    if(length == length_b && count == length)
    {
        printf("%s",a);
    }
    else if(cmp == 0 && length < length_b)
    {
        printf("%s",a);
    }
    else if(cmp == 1)
    {
        printf("%s",a);
    }    
    else if(cmp == -1)
    {
        printf("%s",b);
    }  
    
    return 0;
   
}




//                      9.string digit count code
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000001];
    scanf("%s",str);
    int length = strlen(str);
    long long sum=0;
    for(int i=0; i<length; i++)
    {
        int num = str[i] - '0';     
        sum += num;
    }
    printf("%lld",sum);
    return 0;
}





//                     10. 2 string mixis output


int main(){
    int n;
    scanf("%d",&n);
    char s[51];
    char t[51];
    for(int i=0; i<n; i++)
    {
        scanf("%s %s",s,t);    
    }
    for(int i=0; i<n; i++)
    {      
        printf("%s %s\n",s,t);
    }
    return 0;
}






//                     11. 2 string copy by manualy

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[51];
    char t[51];
    char c[102];
    for(int i=0; i<n; i++)
    {
        scanf("%s %s",s,t);    
        int length_s = 0;
        length_s = strlen(s);
        int length_t = 0;
        length_t = strlen(t);
        int large = 0;
        if(length_s > length_t)
        {
            large = length_s;
        }
        else
        {
            large = length_t;
        }
        printf("%d",large);

        for(int i=0,j=0; i<large; i++,j=j+2)
        {     
           if(length_s == length_t)
           {
                c[j]=s[i];
                c[j+1]=t[i];
           }
           else
           {
                
                if(length_s != '\0' && length_t != '\0')
                {
                    c[j]=s[i];
                    c[j+1]=t[i];
                }
                else if(length_t == '\0')
                {
                    c[i+length_t]=s[i];
                }
                else if(length_s == '\0')
                {
                    c[i+length_s + 1] = t[i];
                }       
           }    
        }
        printf("%s\n",c);
    }    

    return 0;
}




