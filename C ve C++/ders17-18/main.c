#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	//DÝZÝLER BAÞLANGIÇ************

int main() 
{
	/*
	int tekrakamlar[]={1,3,5,7,9};
	printf("%d",tekrakamlar[3]);
	*/
	
	/*
	char sehir[5]={'T','O','K','A','T'};
	
	printf("%s",sehir);
	*/
	
	
	//DÝZÝLER FARKLI ÞEKÝLDE GÖSTERÝMÝ**************
	/*
	int sayilar[4];
	sayilar[0]=456;
	sayilar[1]=123;
	sayilar[2]=45;
	sayilar[3]=678;
	sayilar[4]=998;
	
	printf("%d",sayilar[0]);
	*/
	
	
	//****************************************DERS 18****************************************************//
	/*
	int i,sayilar[]={10,20,30,40,50,60,70,80,90,100};
	
	for (i=0; i<10;i++) 
	{
		printf("%d\n",sayilar[i]);
	}
	*/
	/*
	char sehirler[3][10]={"Tokat","Sakarya","Istanbul"};
	
	int i ; 
	
	for(i=0;i<3;i++)
	{
		printf("%s\n",sehirler[i]);
	}
	*/
	/*
	int sayilar[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int toplam=0 , i;
	
	for(i=0;i<14;i++)
	{
		toplam=toplam+sayilar[i];
		
	}
	printf("%d",toplam);
	*/
	/*
	int ogr_notlari[10] , toplam , i ;
	
	for(i = 0 ; i<10 ; i++)
	{
		printf("%d . Ogrencinin Notunu Giriniz : ",i+1); scanf("%d",&ogr_notlari[i]);
		toplam+=ogr_notlari[i] ; 
	}
	printf("Siniftaki Ogrencilerin Not Ortalamasi : %.2f",(float)toplam/10);
	
	*/
	
	//ÝKÝ BOYUTLU DÝZÝLER    ********2-D arrays****************
	
	/*
 	int matris[2][2] ; // matris[SATIR][SÜTUN]
 	
 	matris[0][0]=1;
	matris[0][1]=2;
	matris[1][0]=3;
	matris[1][1]=4;
	
	printf("%d ",matris[0][0]);
	printf("%d\n",matris[0][1]);
	printf("%d ",matris[1][0]);
	printf("%d\n",matris[1][1]);
	
	
	int matris2[2][5]={{1,2,5,8,9},{3,4,3,5,8}};
	int i , j ;
	for(i = 0 ; i<2 ; i++)
	{
		for( j = 0 ; j<5 ; j++)
		{
			printf("%d ",matris2[i][j]);
		}
		printf("\n");
	}
	
	*/
	/*2 FABRÝKA 10 ÝÞÇÝ MAAÞ ARTTIRMA GÝBÝ BÝ PROGRAM GÜZEL 2 BOYUTLU
	int fabrika[2][5] ;
	int i , j ; 
	for (i = 0 ; i<2 ; i++)
	{
		for( j = 0 ; j<5 ; j++)
		{
			printf("%d . Fabrikanin %d.Elemaninin  Maasi : ",i+1,j+1); scanf("%d",&fabrika[i][j]);
			if(fabrika[i][j]>0 && fabrika[i][j]<1000)
			{
				fabrika[i][j]+=fabrika[i][j]*0.1 ; 
			}
		}
	}
	printf("*****************\n\n");
	for (i = 0 ; i<2 ; i++)
	{
		for( j = 0 ; j<5 ; j++)
		{
			printf("%d . Fabrikanin %d.Elemaninin Yeni Maasi : %d TL\n",i+1,j+1,fabrika[i][j]); 
		}
		printf("\n");
	}
	*/
	
	/*2 OKUL  4 SINIF 20 OGRENCÝNÝN ORTLAMASI 80 ÜSTÜ OLANLARIN SAYISINI VEREN P.
	
		int okul_sinif_ogr[2][2][5];
		int i , j , k ; 
		int say ; 
		for(i=0 ; i<2 ; i++)
		{
			for(j=0 ; j<2 ; j++)
			{
				for(k=0 ; k<5 ; k++)
				{
					printf("%d. Okulun %d. Sinifindaki %d. Ogrencinin Ortalamasi : ",i+1,j+1,k+1); scanf("%d",&okul_sinif_ogr[i][j][k]);
				}
				printf("\n");
			}
		printf("***********************************************\n");
		}
		
		
		for(i=0 ; i<2 ; i++)
		{
			for(j=0 ; j<2 ; j++)
			{
				for(k=0 ; k<5 ; k++)
				{
					printf("%d. Okulun %d. Sinifindaki %d. Ogrencinin Ortalamasi : %d\n",i+1,j+1,k+1,okul_sinif_ogr[i][j][k]);
					if(okul_sinif_ogr[i][j][k] > 80)
					{
						say++ ; 
					}
				}
				printf("\n");
			}
		printf("***********************************************\n");
		}
	

	printf("Sinifi Geçenlerin Sayisi : %d\n",say); */
	
	
	
	//************************************************KARAKTER DÝZÝLERÝ************************************************
	/*
	char isim[6]="Furkan";
	char isim1[]="Furkan";
	char *isim2 ="Furkan";
	char isim3[]={'F','u','r','k','a','n'}; 
	
	printf("%s , %s , %s\n",isim,isim1,isim2,isim3);
	
	char isimler[5][15]={"Furkan","Sude","Berra","Arif","Omer"}; 
	int i ; 
	for(i=0 ; i<5 ; i++)
	{
		printf("%s\n",isimler[i]);
	}
	
	int i , n ; 
	printf("Kac Adet Isim Girilecek : "); scanf("%d",&n);
	char isimler[n][20];
	
	
	for(i=0 ; i<n ; i++)
	{
		printf("%d. Isim : ",i+1); scanf("%s",isimler[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		printf("%d. Isim : %s\n",i+1,isimler[i]);
	}
	*/
	/*
	***********************************************DÝÞARÝDAN ÝSÝM ALMALÝ OGRENCÝ ORTALAMA HESAPLAMA SISTEMI SARAN VERSÝYON*******************************
	
	*/
	char ogr_isim[2][5][20] ; int  i , j ;
	float vize[2][5] , final[2][5] , ort[2][5] ; 
	
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			printf("%d. Siniftaki %d. Ogrencinin Ismini Giriniz : ",i+1,j+1); scanf("%s",ogr_isim[i][j]);
			printf("%d. Siniftaki %d. Ogrencinin Vize Giriniz : ",i+1,j+1); scanf("%f",&vize[i][j]);
			printf("%d. Siniftaki %d. Ogrencinin Final Giriniz : ",i+1,j+1); scanf("%f",&final[i][j]);
			printf("\n");
			
			ort[i][j]=0.4*vize[i][j] + 0.6*final[i][j] ;
		}
		printf("\n");
	}
	
	for(i=0 ; i<2 ; i++)
	{
		printf("%d. Siniftaki Ogrencilerin Not Ortalamalari \n",i+1);
		for(j=0 ; j<5 ; j++)
		{
			printf("%d. Siniftaki %d. Ogrenci Olan %s Isimli Ogrencinin Ortalamasi : %.2f ",i+1,j+1,ogr_isim[i][j],ort[i][j]);
			printf("\n");
			
		}
		printf("\n");
	}
	
	/*
	char sirket_calisan_isimleri[2][5][10] ; 
	int urun[2][5] , maas[2][5] , i , j ; 
	
	for(i=0 ; i<2  ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			printf("%d. Sirketin %d. Elemaninin Ismi :  ",i+1,j+1); scanf("%s",sirket_calisan_isimleri[i][j]);
			printf("%d. Sirketin %d. Elemaninin Maasi :  ",i+1,j+1); scanf("%d",&maas[i][j]);
			printf("%d. Sirketin %d. Elemaninin Sattigi Urun Sayisi:  ",i+1,j+1); scanf("%d",&urun[i][j]);
			//1-5 Arasi Urun Ýçin 5 tl zam . 
			//6-10 Arasi Urunler için de 10 tl zam . 
			if(urun[i][j]>0 && urun[i][j]<=5)
			{
				maas[i][j]+=5*urun[i][j] ;
			}
			else if(urun[i][j]>5 && urun[i][j]<=10)
			{
				maas[i][j]+=10*urun[i][j] ;
			}
		}
	}
	
	for(i=0 ; i<2 ; i++)
	{
		printf("\n%d. SIRKET\n",i+1);
		for(j=0 ; j<5 ; j++)
		{
			printf("%d. Sirketin  %s Isimli Elemanin Yeni Maasi : %d\n",i+1,sirket_calisan_isimleri[i][j],maas[i][j]);
		}
	}
	
	*/
	
	/*
	int sayilar[]={44,13,56,18,78,12,98,12,45,23} ; 
	int sayi , i , bulundu = 0 ;
	git1 : printf("Sayi Giriniz : "); scanf("%d",&sayi) ; 
	
	for(i=0 ; i<10 ; i++)
	{
		if(sayilar[i] == sayi)
		{
			bulundu=1 ; break ; 
		}
	}
	if(bulundu==1)
	{
		printf("Girilen %d Degeri Dizinin %d. Indisinde Bulundu\n",sayi,i);
		printf("Tekrar Denemek Icin A Tusuna Basiniz."); 
	}
	else 
	{
		printf("Sayi Bulunamadi\a\a\a\n");  goto git1 ; 
	}
	
	*/
	/*
	int sayilar[10],  i , bulundu =0 ,sayi ; 
	printf("10 Adet Sayi Giriniz  \n"); 
	
	for( i = 0 ; i<10 ; i++ )
	{
		printf("%d. Sayi : ",i+1); 	scanf("%d",&sayilar[i]);
	}
	system("CLS") ; //EKRAN TEMÝZLMEEEEEEE***********************
	printf("Aranacak Sayi : "); git : scanf("%d",&sayi);
	
	for( i = 0 ; i < 10 ; i ++)
	{
		if(sayilar[i] == sayi)
		{
			bulundu=1 ; break ;  
		}
	}	
	if(bulundu == 1 )
	{
		printf(	"Aradiginiz  %d Sayisi Dizinin %d. Indisinde Bulundu.",sayi,i);
	}
	else
	{
		printf("Aradiginiz Sayi Dizinin Herhangi Bir Indisinde Bulunamadi\a\a\a\nTekrar Deneyiniz : "); goto git ; 	
	}
	*/
	/*
	int dizi[]={45,78,14,5,9,99} , i  , j , gecicibellek ;
	for(i = 0 ; i<6 ; i++)
	{
		for(j=0 ; j<6 ; j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				gecicibellek=dizi[j];
				dizi[j]=dizi[j+1] ; 
				dizi[j+1]= gecicibellek ;
			}
		}	
	}  
	
	for(i = 0 ; i<6 ; i++)
	{
		printf(" %d ",dizi[i]);
	}
	*/
	/*
	int  n , gecici_bellek , i , j ;
	
	printf("Diziye Eklemek Istediginiz Sayi Sayisini Giriniz : "); scanf("%d",&n);
	
	int sayilar[n]  ;
	for(i = 0  ; i < n ; i ++)
	{
		printf("Dizinin %d. Indisine Eklenecek Sayiyi Giriniz : ",i); scanf("%d",&sayilar[i]);
	}
	for( i = 0  ; i < n ; i ++)
	{
		for( j = 0  ; j < n-i ; j ++) //n-i dememizin nedeni programý çok daha hýzlý çalýþtýrmak için çünkü ilerleyen yýllarda çok veriler kullanýldýðý zaman  programý bi nebze olsun hafifletecek çünkü her sýralama sonrasý  baþtan kontrol edeceði için ......
		{
			if(sayilar[j] > sayilar[j + 1] )
			{
				gecici_bellek = sayilar[j] ; 
				sayilar[j] = sayilar[j+1] ; 
				sayilar[j+1] = gecici_bellek ; 
			}
		}
	}
	for( i = 0 ; i < n ; i ++)
	{
		printf("%d ",sayilar[i]);
	}
	*/
	
	


	
	
	
}
