#include <stdio.h>
#include <stdlib.h>


	
int main() {
	
	//****************FOR DONGUSU DERS10************
	/*
	int i;
	
	for(i=1; i<=10; i++)
	{
		printf("OGRENIYORUM YAVAS YAVAS ...\n\n");
	}
	*/
	
/*
	int i;
	for(i=1; i<=10; i++)
	{
		printf("%d-Iyi Aksamlar Kardesim...\n",i);
	}
	*/
	/*
	int i;
	int sayac=0;
	
	for(i=1; i<=10; i++)
	{
		sayac= sayac+i;
	}
		printf("%d",sayac);	*/
		
		//DERS 11 SAYAC FAKTORIYEL HESABI
		
		/*
		int i;
		int sayac=1;
		
		for(i=1; i<=10; i++) //for(i=10; i>0; i=i-1)
		{
			sayac=sayac*i;
		}
		printf("Sayinin Faktoriyeli: %d",sayac);
		*/
		//KARÞIDAN ALINAN DEÐERLE FAK BULMA 
		/*
		int i, sayi,faktoriyel;
		
		printf("Faktoriyeli Alinacak Sayi : ");
		scanf("%d",&sayi);
		
		for(i=1; i<=sayi; i++)
		{
			faktoriyel=faktoriyel*i;
		}
		
		printf("Sayinin Faktoriyeli : %d",faktoriyel);
		
		*/
		//********ALGORÝTMA GELÝÞTÝRME SAYFA 77 *************
			//	4.ÖRNEK
			
		int n,i,s=0,toplam=0,carp=1,kare=0;
		printf("bir sayi giriniz: ");
		scanf("%d",&n);
		
		for(i=1; i<=n;i=i+2)
		{
		toplam=toplam+i;
		carp=carp*i;
		}
		
		for(s=0;s<=n;s=s+2)
		{
		kare=s*s;
				
		}
		printf("1 sayisindan %d sayisina kadar olan tek sayilarin toplami : %d\n",n,toplam);
		printf("1 sayisindan %d sayisina kadar olan tek sayilarin carpimi : %d\n",n,carp);	
		printf("1 sayisindan %d sayisina kadar olan cift sayilarin karelerinin toplami : %d",n,kare);	

		
		//********ALGORÝTMA GELÝÞTÝRME SAYFA 77 *************
		 //5.ÖRNEK 
		 /*
		 int i,sayi;
		 char yeter[15];
		 printf("sayiyi giriniz: ");
		 scanf("%d",&sayi);
		 printf("Bir Kelime Gir : ");
		 scanf("%s",yeter);
		 
		 for(i=0; i<=sayi; i++)
		 {
		 	printf("%d-",sayi);
		 	printf("%s\n",yeter);
		 }
		 */
		 //*********************FÝBONACCÝ SERÝSÝNÝN ÝLK 10 ELEMANI ******************
		 /*
		 int a=1,b=1,c,i;
		*/
		/*
			printf("Al Sana Fibonacci : %d\n",a);
			printf("Al Sana Fibonacci : %d\n",b);
		for(i=1; i<=8;i++)
		 {
		c=a+b;
		a=b;
		b=c;
			
			 printf("Al Sana Fibonacci : %d\n",c);
			 */
			 
			 ////*********************TRÝBONACCÝ SERÝSÝNÝN ÝLK 10 ELEMANI ******************
			 /*
			 int a=1,b=1,c=1,d,i;
		
		
			printf("Al Sana Tribonacci : %d\n",a);
			printf("Al Sana Tribonacci : %d\n",b);
			printf("Al Sana Tribonacci : %d\n",c);
		for(i=1; i<=7;i++)
		 {
		d=a+b+c;
		a=b;
		b=c;
		c=d;
			
			 printf("Al Sana Tribonacci : %d\n",d);	 }
		 */
		 /*
		 int i;
		 
		 for(i=1;i<=41;i=i+4)
		 {
		 	
		 	printf("%d\n",i);
		 	
		 }
		 */
		 
		 




}


