#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    // Replace month number "04" with month name "Apr"
    char day[3], month[3], year[5];
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    char monthName[4];
    if (strcmp(month, "01") == 0) strcpy(monthName, "Jan");
    else if (strcmp(month, "02") == 0) strcpy(monthName, "Feb");
    else if (strcmp(month, "03") == 0) strcpy(monthName, "Mar");
    else if (strcmp(month, "04") == 0) strcpy(monthName, "Apr");
    else if (strcmp(month, "05") == 0) strcpy(monthName, "May");
    else if (strcmp(month, "06") == 0) strcpy(monthName, "Jun");
    else if (strcmp(month, "07") == 0) strcpy(monthName, "Jul");
    else if (strcmp(month, "08") == 0) strcpy(monthName, "Aug");
    else if (strcmp(month, "09") == 0) strcpy(monthName, "Sep");
    else if (strcmp(month, "10") == 0) strcpy(monthName, "Oct");
    else if (strcmp(month, "11") == 0) strcpy(monthName, "Nov");
    else strcpy(monthName, "Dec");

    printf("Formatted Date: %s-%s-%s", day, monthName, year);
    return 0;
}
