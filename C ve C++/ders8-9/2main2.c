#include <stdio.h>
#include <stdlib.h>


int main() {
	
	//************* ÝF KULLANMAYA BAÞLADIK
	
	/*
	int sayi;
	sayi=15;
	
	if(sayi==15)
	{
	printf("Girilen Sayi 15dir");
	
	}
	else
	printf("Girilen Sayi 15 degildir");
	*/
	
	//*******************OGRENCI ORTALAMA HESAPLMA VE GEÇÝP GEÇMEDÝÐÝNÝ ALGILAMA IF ELSE
	/*
	float s1,s2,s3,ort;
	
	printf("***Ogrenci Ortalama Bulma***\n\n");
	
	printf("1.Sinav Notunu Giriniz: ");
	scanf("%f",&s1);
	printf("2.Sinav Notunu Giriniz: ");
	scanf("%f",&s2);	
	printf("3.Sinav Notunu Giriniz: ");
	scanf("%f",&s3);
	
	ort=(s1+s2+s3)/3;
	printf("Ortalamaniz : %f\n\n ",ort);
	if(ort>=50){
		printf("---Geçtiniz---:DDDDDDD");
	}
	else{
		printf("---Kaldiniz---:((((((((");
	} */
	
	//*********************TEK MÝ ÇÝFT MÝ HOCAAM DERS9
	/*
	int sayi;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%2==0){
		printf("Sayi cifttir.");
		
	}
	else
		printf("Sayi tektir.");
		*/
		
		//*****************************ve
		/*
		int sayi;
		printf("sayiyi giriniz: ");
		scanf("%d",&sayi);
		
		if(sayi%3==0 && sayi%5==0){
			printf ("sayi 15in katidir.");
		}
		else
		printf("sayi 15in kati degildir.");
		*/
		
		//*************************veya
		/*
		int sayi;
		printf("sayiyi giriniz: ");
		scanf("%d",&sayi);
		
		if(sayi%3==0 || sayi%5==0){
			printf ("sayi3 veya 5 e tam bolunur");
		}
		else
		printf("sayi3 veya 5 e tam bolunmez.");
		*/
		//DERS 9  
		
		
		float s1,s2,s3,p1,ort;
		printf("1.sinav notunu giriniz: ");
		scanf("%f",&s1);
		printf("2.sinav notunu giriniz: ");
		scanf("%f",&s2);
		printf("3.sinav notunu giriniz: ");
		scanf("%f",&s3);
		printf("1.proje notunu giriniz: ");
		scanf("%f",&p1);		
		ort=(s1+s2+s3+p1)/4;
		
		printf("Donem Sonu Ders Ortalamaniz : %f\n",ort);
		
		if(ort<50)
		{
			printf("FF");
		}
		if(ort>=50 && ort<60)
		{
			printf("DD");
		}
		if(ort>=60 && ort<70)
		{
			printf("CC");
		}
		if(ort>=70 && ort<85)
		{
			printf("BB");
		}
		if(ort>=85 && ort<=100)
		{
			printf("AA");
		}
		
		
		
		
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
}
