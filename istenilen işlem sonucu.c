#include <stdio.h>

int main(){
	int a,b,c;
	printf("A'2+B'2+Cx3 işlemini yapmak için sayıları sırasıyla giriniz:");
	printf("\n1.sayı-A:");
	scanf("%d",&a);
	printf("2.sayı-B:");
	scanf("%d",&b);
	printf("3.sayı-C:");
	scanf("%d",&c);
	printf("İşlemin Sonucu: %d",a*a+b*b+c*3);
	
}