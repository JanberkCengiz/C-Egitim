#include <stdio.h>

int fact(int);
int main(){
	int sayi;
	printf("Faktöriyelini bulmak istediğiniz sayıyı giriniz: ");
	scanf("%d", &sayi);
	printf("Sayının faktöriyeli: %d",fact(sayi));	
}
int fact(int sayi){
	int sonuc = 1;
	for(int i = 1;i<=sayi;i++){
		sonuc *= i;
	}
	return sonuc;
}