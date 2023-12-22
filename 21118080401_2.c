#include <stdio.h>
int main()
{
    double number;

    printf("bir sayı giriniz: ");
    scanf("%lf", &number);

    if (number < 0.0)
        printf("Negatif.");

    else if ( number > 0.0)
        printf("Pozitif.");

    else
        printf("sifir.");
    return 0;
}