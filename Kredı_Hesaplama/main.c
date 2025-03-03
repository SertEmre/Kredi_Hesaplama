#include <stdio.h>
#include <math.h>
int main() {

double kredi,faiz,aylikFaiz,taksit,toplamOdeme;
int vade;
printf("Kredi miktarini girin : ");
scanf("%lf", &kredi);

printf("Vade suresini girin(ay): ");
scanf("%d", &vade);

printf("Yillik faiz oranini girin (%%): ");
scanf("%lf", &faiz);

aylikFaiz = faiz / 100 / 12;

//takisit hesaplama
taksit = (kredi *aylikFaiz*pow(1+ aylikFaiz, vade)) / (pow(1 + aylikFaiz, vade) - 1);

toplamOdeme = taksit * vade;
printf("\n Aylik taksit tutari: %.2f \n", taksit);
printf("Toplam geri odeme: %.2f \n", toplamOdeme);

return 0;
}
