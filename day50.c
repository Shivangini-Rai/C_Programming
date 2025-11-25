#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if (month >= 1 && month <= 12) {
        printf("Formatted date: %02d-%s-%d\n", day, months[month - 1], year);
    } else {
        printf("Invalid month!\n");
    }

    return 0;
}
