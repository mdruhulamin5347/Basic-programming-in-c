
// calculate even and odd nuber using forloop
#include<stdio.h>

int main(){
    int sum = 0;
    int even = 0;
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i=a; i<=b; i++){
        if(i%2==0){
            even += i;
        }
        sum += i;
          
    }
    printf("total even is: %d \n", even);
    printf("total value is: %d \n", sum);
}


// learn while loop
int main(){
    int sum = 0;
    int i = 0;
    while (i<=100)
    {
        sum += i;
        i += 2;
    }
    printf("Total Addition is: %d ", sum);
    return 0;
    
}

// learn do while looop
int main(){
    int sum = 0;
    int i = 0;
    do{
        sum += i;
        i++;
    }while (i<=10);
    printf("%d", sum);
    return 0;
  
    
}

// initialization in forloop
int main(){
    
    
    for(int i=2;i>=0;i--){
        
        for(int j=0; j<=4; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}




// initialization in forloop
int main(){
    int i=0, j=0;
    for(j=1;j<=5;j++){
        i++;
    }
    printf("%d",j);
    return 0;
}



// pyramid pattern print

int main(){
    int n;  // Height of the pyramid
    scanf("%d",&n);
    int i, j, k;
    
    for(i = 1; i <= n; i++) {
        // Print spaces before the stars
        for(k = 1; k <= n - i; k++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    for(i = 1; i <= n; i++) {
        // Print spaces before the stars
        for(k = 1; k <= 2*i -i; k++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <=n * 2 - i * 2 - 1 ; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    return 0;
}



// fibonacci pattern print

int main(){
    int l;
    scanf("%d",&l);
    int a=0,b=1,c;
    for(int i=1;i<=l;i++)
    {
        c = a + b;
        b = a;
        a = c;
        
        printf("%d ",c);
    }
    printf("hello ");
    return 0;
}


// use bool data type

#include<stdbool.h>

int main(){
    bool b = true;
    printf("%d",b);
    return 0;
}