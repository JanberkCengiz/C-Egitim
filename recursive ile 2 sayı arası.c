#include <stdio.h>

int main(){
	int a,b;
	printf("Arasındaki sayıları görmek için 2 sayı giriniz");
	printf("\nKüçük sayı: ");
	scanf("%d",&a);
	printf("Büyük sayı: ");
	scanf("%d",&b);
	for (int c=a;c<=b;c++){
		printf("%d  ", c);
		
	}
}