
#include<stdio.h>

int Adet, Sayi, EnBuyuk, EnKucuk, Sayici;

int
main () 
 
{
  
 
   printf ("Kac sayi gireceksiniz:\n");
   scanf ("%d", &Adet);
  
 
 
 
   printf ("1.sayiyi girin:");
   scanf ("%d", &Sayi);
 
    
EnBuyuk = Sayi;
EnKucuk = Sayi;
Sayici = 1;
  
 
 
while (Sayici < Adet)
    
    {
      
 
Sayici++;
      
 
printf ("%d.", Sayici);
printf ("sayiyi girin:");
scanf ("%d", &Sayi);
      
 
if (EnBuyuk < Sayi)
	EnBuyuk = Sayi;
      
 
if (EnKucuk > Sayi)
	EnKucuk = Sayi;
    
 
}
  

printf ("En buyuk sayi:%d ", EnBuyuk);
printf ("En kucuk sayi:%d", EnKucuk);
  
 
 
 
 
return 0;

 
}


 
