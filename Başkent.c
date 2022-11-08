#include <stdio.h>

int main(void){
	char baskent[512];
	int i = 0, x;
	int fark = 'a' - 'A';
	
	printf("Türkiyenin başkenti neresidir?");
	printf("\n==>");
	scanf("%c",&baskent);
	if (baskent=="ankara"){
		printf("Doğru bildin Türkiyenin başkenti Ankaradır");
	}
	
	else if (baskent !="ankara"){
		printf("Yanlış cevap türkiyenin başkenti %c değildir.", baskent);
	}
	
	else{
		printf("Lütfen sayı yerine bir başkent giriniz.");
	}
}