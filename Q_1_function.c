#include <stdio.h>
// function declaration 
int sum(int a,int b);

int main() {
    // function call
int a,b;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    printf("sum =%d", a+b);
    return 0;
}

int sum(int a,int b){          
    return a+b;
}
