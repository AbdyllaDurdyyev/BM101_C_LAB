#include <stdio.h>
int main()
{
   int sayi, i = 1, toplam = 0;
   printf("10 dan buyuk olmayan sayi girin: \n");
   scanf("%d", &sayi);
    if (sayi<=10)  {
   while (sayi > i)
   {
      toplam = toplam + i;
      i = i + 2;
   }
   printf("1 ve %d arasindaki tek sayilarin toplami: %d \n", sayi, toplam);

  }
  else {
    printf("Girdiginiz sayi 10 dan buyuk");
    }
   return 0;
}