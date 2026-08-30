#include <stdio.h>

int main() {
    float celsius,fahrenheit;
    printf("enter the temprature in celsius ");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9)/5 + 32;
    printf("the temprature in fahrenheit is= %f",fahrenheit);
    return 0;
}
