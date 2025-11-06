//no.of days in a month
#include <stdio.h>
#include<string.h>
int main() {
    char month[20];
    printf("Enter the Month : ");
    scanf("%s",month);
    if (strcmp(month, "january") == 0 || strcmp(month, "march") == 0 ||
        strcmp(month, "may") == 0 || strcmp(month, "july") == 0 ||
        strcmp(month, "august") == 0 || strcmp(month, "october") == 0 ||
        strcmp(month, "december") == 0) {
        printf("31 days\n");
    }
    else if (strcmp(month, "april") == 0 || strcmp(month, "june") == 0 ||
             strcmp(month, "september") == 0 || strcmp(month, "november") == 0) {
        printf("30 days\n");
    }
    else if (strcmp(month, "february") == 0) {
        printf("28 or 29 days (depending on leap year)\n");
    }
    else {
        printf("Invalid month name!\n");
    }

}