
// array insert value

#include <stdio.h>
int arr[100000];
int main() {
    int length;
    scanf("%d",&length);
    for(int i=0; i<length; i++)
    {
        scanf("%d",&arr[i]);
    }
    int index,value;
    scanf("%d",&index);
    scanf("%d",&value);
    length++;
    for(int i=length - 1 ; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=value;
    for(int i=0; i<length; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}



//////////// value delete in array

#include <stdio.h>

int arr[100000];
int main(){
    int length;
    scanf("%d",&length);
    for(int i=0; i<length; i++)
    {
        scanf("%d",&arr[i]);
    }
    int index;
    scanf("%d",&index);
    for(int i=index; i<length-1; i++)
    {
        arr[i]=arr[i+1];
    }
    length--;
    for(int i=0;i<length; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
