#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int sayilar[]={44,13,56,18,78,12,98,12,45,23} ; 
	int sayi , i , bulundu = 0 ;
	printf("Sayi Giriniz : "); scanf("%d",&sayi) ; 
	
	for(i=0 ; i<10 ; i++)
	{
		if(sayilar[i] == sayi); 
		{
			bulundu=1 ; break ;
		}
	}
	if(bulundu==1)
	{
		printf("Girilen %d Degeri Dizinin %d. Indisinde Bulundu",sayi,i);
	}
	else 
	{
		printf("Sayi Bulunamadi\a\a\a\n");  
	}
	return 0;
}
