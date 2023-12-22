#include <stdio.h>
#include <stdlib.h>

int indirimuygula(int );
int main(){

int urun1;
int urun2;
int toplam;
printf("Lutfen birinci urunun fiyatini giriniz:");
scanf("%d",&urun1);
printf("Lutfen ikinci urunun fiyatini giriniz:");
scanf("%d",&urun2);
toplam=urun1+urun2;
  if (toplam<200){
      
      printf("toplam odenecek tutar: %d",toplam);
      
  }

else
 {

printf("toplam odenecek tutar: %d",indirimuygula(toplam));


}


return 0;

}

int indirimuygula(int toplam)
{
toplam=toplam-toplam*0.25;
return toplam;
}