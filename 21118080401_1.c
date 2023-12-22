#include <stdio.h>
#include <stdlib.h>

int karehesapla(int );
int main(){

int x;

printf("Lutfen bir sayi giriniz:");
scanf("%d",&x);
printf("Girdiginiz sayinin karesi: %d",karehesapla(x));

return 0;


}
int karehesapla(int x)
{
x*=x;
return x;
}