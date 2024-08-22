#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	// ESKENAR UCGEN YAZDIRMA 
	
	
	int i , j , satir , bosluk , yildiz = 1 ; 
	
	printf("Satir Sayisi Giriniz : ");
	scanf("%d",&satir);
	
	bosluk = satir -1 ; 
	
	for(i = 1 ; i <=satir ; i++ )
	{
		for(j = 1 ; j<= bosluk ; j++)
		printf(" ");
		
		for(j = 1 ; j<=yildiz ; j++)
		printf("*");
		
		printf("\n");
		
		yildiz = yildiz + 2 ;
		
		bosluk = bosluk - 1 ; 
	}
	
	/*
	int en , boy , i , j ;
	
	printf("En Degeri : ");
	scanf("%d",&en);
	printf("Boy Degeri : ");
	scanf("%d",&boy);
	
	
	for(i = 1 ; i<=boy ; i++)
	{
		for(j=1 ; j<=en ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	*/
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
