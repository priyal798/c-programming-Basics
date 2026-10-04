#include <stdio.h>
// function declaration here if we dont write print then execution is also same
void printHello();
void printGoodbye();

int main() {
    // function call
printHello();
printGoodbye();
    return 0;
    // function definitition
}
 void printHello() {
     printf("Hello\n");
 }
void printGoodbye(){
    printf("Good bye\n");
}
