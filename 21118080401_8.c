#include <stdio.h>

int  main ()
   {
int j,i,c,satir;
  printf ("Ishlem kac satir yapilacak:");
  scanf ("%d", &satir);
 
  
        for ( i = 1; i <= satir; i++)
        {

            for ( j = 1; j < i; j++)
            {

                printf(" ");
            }
            for ( c = 1; c <= satir; c++)
            {
                printf("*");
            }
                printf("\n");
            
            
        }


  return 0;
}
