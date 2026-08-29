#include <stdio.h>

int main() {
    // if condition is more than one then use else if condition
    int age ;
    printf("enter age ");
    scanf("%d",&age);
    if(age >= 18 ){
        printf("you are adult");
    } else if(age >=13 && age <= 18){
        printf("you are teenage ");
    } else {
        printf("child");
    }
    
    return 0;
}
