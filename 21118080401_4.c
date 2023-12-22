#include <stdio.h>

float toplam( float sayi1, float sayi2);
float cikarma( float sayi1, float sayi2);
float carpma( float sayi1, float sayi2);
float bolme( float sayi1, float sayi2);

int main(){
    float sayi1,sayi2;
    char sembol;

    printf("Ilk sayiyi giriniz: ");
    scanf("%f",&sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%f",&sayi2);
    
    printf("İslemler:  + - * /  :");
    scanf("%s",&sembol);

        switch (sembol)
    {
    case '+':
        printf("toplama işlemininin sonucu %.1f",toplam(sayi1,sayi2));
        break;
    case '-':
        printf("Cıkarma işlemininin sonucu %.2f",cikarma(sayi1,sayi2));
        break;
    case '*':
        printf("Carpma işlemininin sonucu %.3f",carpma(sayi1,sayi2));
        break;
    case '/':
        printf("Bolme işlemininin sonucu %.4f",bolme(sayi1,sayi2));
        break;
    default:
        printf("Hatalı bir işlem sembolu girdiniz.");
        break;
    }

    return 0;


}

float toplam( float sayi1, float sayi2){

    
    return sayi1 + sayi2;


}

float cikarma( float sayi1, float sayi2){


    return sayi1 - sayi2;
    
}

float carpma( float sayi1, float sayi2){


    return sayi1 * sayi2;
}

float bolme( float sayi1, float sayi2){

    return sayi1 / sayi2;
}