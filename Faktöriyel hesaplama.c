#include <stdio.h>

int main(){
	int sayi;
	int fakt;
	int toplam=1;
	printf("Faktoriyel bulmak icin bir sayı giriniz:");
	scanf("%d",&sayi);
	for (fakt=sayi; fakt!=0; fakt--){
		toplam= toplam*fakt;
	}
	printf("\n%d sayısının faktöriyeli:%d",sayi,toplam);
}
