#include <stdio.h>
#include<conio.h>
int main() {
   int satir, katsayi = 1, bosluk, i, j;
   printf("KAT SAYI  ::: ");
   scanf("%d", &satir);
   for (i = 0; i < satir; i++) {
      for (bosluk = 1; bosluk <= satir - i; bosluk++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            katsayi = 1;
         else
            katsayi = katsayi * (i - j + 1) / j;
         printf("%4d", katsayi);
      }
      printf("\n");
   }
   getch();
   return 0;
}
