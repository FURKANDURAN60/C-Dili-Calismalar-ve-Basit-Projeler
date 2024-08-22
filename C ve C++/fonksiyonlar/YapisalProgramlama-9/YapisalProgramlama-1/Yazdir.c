//Ekrana Yazdirma isleri
#include"Header.h"

float yazdir(float k, float l){

printf("Sayilarin Toplami:%0.00f", topla(k, l));
printf("\nSayilarin Farki:%0.00f", cikar(k, l));
printf("\nSayilarin Carpimi:%0.00f", carpma(k, l));

getchar();
return 0;
}