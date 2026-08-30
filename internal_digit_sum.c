#include <stdio.h>

int main() {
    // internal sum of a n number of digit 
    // i give two example of pattern
    // ex-1234                   ex-12345
    // 1st no. 1234/1000        1st no. 12345/10000
    // 2nd no. (1234/100)%10    2nd no. (12345/1000)%10
    // 3rd no. (1234/10)%10     3rd no. (12345/100)%10
    // 4th no. 1234 % 10        4th no. (12345/10)%10
    //                          5th no. 12345 % 10
     int num,d1,d2,d3,sum;
     printf("enter a three digit number");
     scanf("%d",&num);
     d1=num/100;
     d2=(num/10) % 10;
     d3= num % 10;
     sum = d1 + d2 + d3;
     printf("the sum of the digit is= %d\n",sum);

    return 0;
}
