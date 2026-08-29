#include <stdio.h>

int main() {
    // convert total days into months and days
    int totaldays,months,remdays;
    printf("enter total days ");
    scanf("%d",&totaldays);
    months = totaldays/30;
    remdays = totaldays % 30;
    printf("months:- %d\n remdays:- %d\n",months,remdays);

    return 0;
}
