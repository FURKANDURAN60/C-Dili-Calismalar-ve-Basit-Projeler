#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int kubbul();
int kubbul2();

void dortgen(int kisa , int uzun)
{
	int i , j ;
	
	for(i=1 ; i<=uzun ; i++)
	{
		for(j=1 ; j<=kisa ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void hasdortgen()
{
	int i , j , kisa , uzun ; 
	
	printf("Lutfen Uzun Kenar Uzunlugunu Giriniz : ");
	scanf("%d",&uzun);
	printf("Lütfen Kisa Kenar Uzunlugunu Giriniz : ");
	scanf("%d",&kisa);
	
	for( i=1 ; i<=uzun ; i++)
	{
		for(j=1 ; j<=kisa ; j++)
		
		if( i== 1 || i == uzun || j == 1 || j==kisa)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
		printf("\n");
	}
	
}


int main() 
{	int sonuc ,s ; 
		sonuc = kubbul();
		printf("%d\n",sonuc);
		
		printf("Kubunu Almak Istediginiz Sayiyi Giriniz : ");
		scanf("%d",&s);
		printf("%d\n",kubbul2(s));
		
		dortgen(4,15);
		hasdortgen();		
		
	return 0;
}


int kubbul()
{
	int sayi,sonuc; 
		printf("Kubunu Almak Istediginiz Sayiyi Giriniz : ");
		scanf("%d",&sayi);
		
		sonuc = pow(sayi,3);
		
		return sonuc ;
}


int kubbul2(int sayi)
{
	sayi = sayi*sayi*sayi ; 
		
		return sayi ;
}


