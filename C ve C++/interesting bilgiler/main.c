#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	/*
	int i ;  
	for( i = 1 ; i<=30 ; i++)
	{
		if(i%2==0)
		{
			continue;
		}
		if( i == 27 )
		{
			printf("Program Sonlandi\a\a\a\n"); break ; 
		} 
		if(i<10)
		{
			printf("0%d\n",i);
		}
		else printf("%d\n",i);
	}*/
	
	
	/****************************STRLEN FONKSÝYONU KULLANIMI***************************
	
	
	
	char tersten_deneme[]="kamalamakNARUD_NAKRUF" ; 
	int i  ;
	for(i = strlen(tersten_deneme) ; i>0 ; i-- )
	{
		printf("%c",tersten_deneme[i]);
	}
	*/	/***//***//***//***//***//***//***//***//***//***//***//***//***/															/***/
																	/***/
/***/	/*
/***///	int k_adi[10] ; 											/***/
/***///	printf("Kullanici Adiniz : "); scanf("%s",&k_adi);			/***/
/***///	if(strlen(k_adi) < 8 )										/***/
/***///	{															/***/
/***///		printf("En Az 8 Karakter Girmelisiniz!\a\a\a\n"); 		/***/
/***///	}															/***/
/***///	else 														/***/
/***///	{															/***/
/***///		printf("Giris Basarili %s",k_adi);						/***/
/***///	}															/***/
/***//***//***//***//***//***//***//***//***//***//***//***//***/	
	/*
	char isim[]="Furkan" , isim2[100] ; 
	printf("Merhaba Ali . %s",strcpy(isim2,"Benim Dediklerimi Cok Iyi Dinle!!")) ; 
	*/
	/*
	char isim[]="Cukunu Yerim" , isimkopya[20] ; 
	int i ; 
	
	for( i = 0  ; i<strlen(isim) ; i ++ )
	{
		printf("Merhaba %s\n",strcpy(isimkopya,isim)) ; 
	}
	*/
	/*
	char mesaj1[]="Merhaba " , mesaj2[]="Dunya" ; 
	strcat(mesaj1,mesaj2) ; 
	printf("%s\n",mesaj1);
	printf("%s",strcat(mesaj1,mesaj2));
	*/
	/*
	char mesaj[]="Merhaba " ; 
	printf("isim : "); scanf ("%s",&isim);
	printf("%s",strcat(mesaj,isim));
	*/
	
	/*
	char isim[10] ,isim_kopya[10] , mesaj[]="Merhaba " ; 
	printf("Isminiz : "); scanf("%s",&isim); 
	strcpy(isim_kopya,isim) ; 
	int uzunluk = strlen(isim) ; 
	printf("%s Isminizin Karakter Uzunlugu %d ",strcat(mesaj,isim_kopya),uzunluk);
	*/
	/*
	strcmp(string_ifade1,string_ifade2) == 0 ; // HER ÝKÝ KOÞUL DA BÝBÝRÝNE EÞÝTTÝR...
	strcmp(string_ifade1,string_ifade2) < 0 ; // s1 , s2'den önce gelir alfabetik olarak ...
	strcmp(string_ifade1,string_ifade2) > 0 ; // s1 , s2'den sonra gelir alfabetik olarak ...
	*/
	
	/*
	char baskent[]="Ankara", cevap[10] ;
	printf("Turkiye'nin Baskenti Neresidir ? \nCevabiniz : "); git1 : scanf("%s",cevap);
	
	if(strcmp(baskent,cevap)== 0 )
	{
		printf("Tebrikler %s Cevabi Dogru",cevap);
	}
	else
	{
		printf("Girilen Yanit Yanliþtir\n"); 	
	}
	*/
	/*
	char kullanici[]="root" , sifre[]="1234" , k_adi[10] , sfr[10] ;
	printf("Kullanici Adiniz : "); scanf("%s",&k_adi) ;
	printf("Kullanici Sifreniz : "); scanf("%s",&sfr) ;
	
	if(strcmp(kullanici,k_adi) == 0 && strcmp(sifre,sfr) == 0 )
	{
		printf("Merhaba Kullanici Girisiniz Basarili ");
	}
	else 
	{
		printf("Kullanici Adi veya Sifreyi Hatali Girdiniz !!!\a\a\a");
	}
	*/
	//ÝÞE YARAMAZ SAÇMA SAPAN BÝÞÝÝÝÝ
	/*
	char isimler[][20]={"Ali","Tugce","Furkan","Omer","Arif","Mehmet"}  ;
	char gecici_bellek[20] ; 
	
	int i , j ; 
	printf("Oncesi\n---------------------\n");
	for( i = 0 ; i < 6 ; i ++)
	{
		printf("%s\n",isimler[i]);
	}
	
	for( i = 0 ; i < 6 ; i ++)
	{
		for( j = 0  ; j < 6 ; j ++)
		{
			if(strcmp(isimler[j],isimler[j + 1])>0)
			{
				strcpy(gecici_bellek,isimler[j]);
				strcpy(isimler[j],isimler[j+1]); 
				strcpy(isimler[j+1],gecici_bellek);
			}
		}
	}
	printf("Sonrasi\n---------------------\n");
	for( i = 0 ; i < 6 ; i ++)
	{
		printf("%s\n",isimler[i]);
	}
	*/
	
	/*
	printf("Dongu Yardimi Ile\n\n");
	
	char ad[10] , ad2[10] ;  
	printf("Ad  : "); scanf("%s",ad); 
	int i , uzunluk = strlen(ad) ;
	 
	for( i = uzunluk ; i >= 0 ; i --)
	{
		printf("%c",ad[i]);		
	} 
	//----------------------------------------
	printf("\n\nSTRREV Fonksiyonu Yardimiyla\n\n");
	
	printf("Isim : "); scanf("%s",ad2);
	printf("%s",strrev(ad2)); 
	*/
	
	/*
	//strlwr  GÝRÝLEN BUTUN HARFLERÝ KUCUK HARFE CEVÝRÝR....
	char karakter[20] ; 
	printf("Karakter Giriniz : "); scanf("%s",karakter);
	printf("Kucuk Harfli Boyle Olur :  %s",strlwr(karakter));
	*/
	
	
	//strupr GÝRÝLEN BUTUN HARFLERÝ BUYUK HARFE CEVÝRÝR....
	
	char karakter[20]  ;
	printf("Karakter Giriniz : "); scanf("%s",karakter); 
	
	printf("Girilen Karakterlerin Buyuk Harfli Hali : \n %s",strupr(karakter)); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
