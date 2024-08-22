#include <stdio.h>
#include <stdlib.h>


int main() 
{
	/*
	int i , j ;
	
	for( i=1 ; i<=5 ; i++)            /*   *      
	{									   **
		for(j=1 ; j<=i; j++)               ***         	ÇÝZDÝRME
		{                                  ****
			printf("*");                   *****      
		}
		printf("\n");
	}
	*/
	/*
	int i , j ; 
	
	for( i=5 ; i>=1 ; i--)
	{
		for(j=1; j<=i ; j++)
		{
			printf("*");
		}
		printf("\n");
	
	}
	*/
	
	
	//YARIKEBELEK
	
		int i , j ;
		
		for(i=1 ; i<=5 ; i++)
		{
			for(j=1 ; j<=i ; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		
		for(i=5 ; i>=1 ; i--)
		{
			for(j=1 ; j<=i ; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	
	//****************DORTGEN ÇÇÝZMEE*************
	/*
	int en , boy , i , j ; 
	printf("En Degeri Giriniz : ");
	scanf("%d",&en);
	printf("Boy Degeri Giriniz : ");
	scanf("%d",&boy);
	
	for(i=1 ; i<=boy ; i++)
	{
		for(j=1; j<=en ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	*/
	/*
	int n , i , j ; 
	printf("Dik Ucgen Icin Sinir Degerini Giriniz : ");
	scanf("%d",&n);
	
	for (i=1 ; i<=n; i++)
	{
		for (j=1 ; j<=i ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	
	for (i=n ; i>=1; i--)
	{
		for (j=1 ; j<i ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	*/
	
	
	
	
	
	
	
	
	
}
