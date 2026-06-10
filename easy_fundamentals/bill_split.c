#include <stdio.h>

int main() {
    double total;
    int people;
    double result;

    printf("Enter the total amount of your bill: ");
    scanf("%lf", &total);
    printf("Enter the count of person will share: ");
    scanf("%d", &people);

    printf("Calculating..\n");

    result = total / people;

    printf("Each of you will share: %.2lf\n", result);

  return 0;
}