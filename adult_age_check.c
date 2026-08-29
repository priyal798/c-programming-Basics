#include <stdio.h>

int main() {
    // use of conditional satatement (if else )
    // either use of else if ternary conditional oprators is easy to use
    int age ;
    printf("enter age = ");
    scanf("%d",&age);
    if(age>=18){
        printf("adult");
    }
    else{
        printf("not adult");
    }
    
    return 0;
}
