#include <stdio.h>

int main() {
    // to check the given number is digit or not
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if(ch>='0'&& ch <= '9'){
        printf(" it is digit =%c \n",ch );
    }
    else{
        printf("it is not a digit=%c\n",ch);
    }
    
    return 0;
}
