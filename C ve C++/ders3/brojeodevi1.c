#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char kadi[20],yazar[15],sayfa[3],basimyili[4],basimevi[10],tur[10];
	
	printf("Kitapin Adini Giriniz : ");
	scanf("%s",kadi);
	
	printf("Kitapin Yazarinin Adini Giriniz : ");
	scanf("%s",yazar);
	
	printf("Kitabin Sayfa Sayisini Giriniz : ");
	scanf("%s",sayfa);
	
	printf("Kitabin Basim Yilini Giriniz : ");
	scanf("%s",basimyili);
	
	printf("Kitabin Basimevini Giriniz : ");
	scanf("%s",basimevi);
	
	printf("Kitabin Turunu Giriniz : ");
	scanf("%s",tur);
	
	printf("*****GIRILEN KITABIN BILGILERI*****\n\n\n\n");
	printf("Kitabin Adi : %s\nKitabin Yazarinin Ismi : %s\nKitabin Sayfa Sayisi : %s\n",kadi,yazar,sayfa);
	printf("Kitabin Basim Yili : %s\nKitabin Basimevi : %s\n Kitabin Turu : %s",basimyili,basimevi,tur);
}
