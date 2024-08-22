#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void  listele()
{
	printf("Ali\n");
	printf("Furkan\n");
	printf("Kartii\n");
	printf("Ariif\n");
	printf("Omarr\n");
	
}


int topla()
{
	
	int s1,s2,s3 ;
	printf("Lutfen Toplamak Istediginiz Sayilari Giriniz : ");
	scanf("%d",&s1);
	printf("Lutfen Toplamak Istediginiz Sayilari Giriniz : ");
	scanf("%d",&s2);
	
	s3=s1+s2 ;
	
	return s3; 

	
}


int main() {
	
	int t ;
	t= topla();
	printf("%d",t);
  
	
	return 0;
}
