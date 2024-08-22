#include "stdio.h"
#include "stdlib.h"



int main() {

	int N, sayac=0, i=2;
	printf("Klavyeden N sayisi giriniz.\n");
	scanf("%d", &N);
	
		for(i=2; i>N; i=i++);{
			if(N%i==0){
				sayac++;
			}
		}
		if(sayac==0){
			printf("Sayi asaldir.");
		}
		else{
			printf("Asal degildir.");
		}
		}
