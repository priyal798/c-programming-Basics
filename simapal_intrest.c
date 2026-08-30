#include <stdio.h>

int main() {
    float principal,rate,time,si;
    printf(" enter principal,rate and time");
    scanf("%f %f %f",&principal,&rate,&time);
     si = (principal* rate * time ) / 100;
    printf("simpal intrest is = %f\n",si);
    return 0;
}
