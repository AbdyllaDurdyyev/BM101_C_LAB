#include <stdio.h>

int main(){

int n,x,i=0;

    printf("Bolunen sayiyi giriniz: ");
    scanf("%d",&n);
        printf("Bolen sayiyi giriniz ");
        scanf("%d",&x);
        if (n>x){ 

        for(i=1;i<n;i++)
          {
            if(i%x == 0)
{
             printf("%d",i);

     }

       }
        }
          else {
                      printf("Bolunen sayi bolen sayidan buyuk olmalidir");
          }

     return 0;
}