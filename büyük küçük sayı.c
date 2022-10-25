#include <stdio.h>

int main(){
	int a;
	int b;
	printf("2 Sayı Giriniz");
	printf("\n 1.sayı:");
	scanf("%d",&a);
	printf("\n 2.sayı:");
	scanf("%d",&b);
	if(a>b)
		printf("%d sayısı daha büyük.",a);
		
	else if(b>a)
		printf("%d sayısı daha büyük.",b);
			
	else
		printf("Sayılar eşit.");
	
}