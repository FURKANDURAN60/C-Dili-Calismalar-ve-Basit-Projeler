#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//********5'E BOLUNEBILME KURALI CDILINDE  MOD ALMA ÝLE************** 
	/*
		int i;
		
		for(i=0;i<=50;i++)
		{
			if(i%5==0)
			{
				printf("5'e tam bolunen Sayilarrr : %d\n",i);
			}
		}
		*/
		//**************GÝRÝLEEN SAYININ HANGI BASAMAGINDA HANGI SAYI VAR **************
		int sayi,yuzler,onlar,birler;
		
		printf ("sayiyi giriniz : ");
		scanf("%d",&sayi);
		
		yuzler=sayi/100;
		onlar=(sayi-(yuzler*100))/10;
		birler=sayi%10;
		printf("%d\n %d\n %d",yuzler,onlar,birler);
		
		
		
		
		
		
		
		
		
		
		
		
		
}
