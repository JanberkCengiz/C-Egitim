#include <stdio.h>

int kare(int);
int main(){
	int kenar;
	printf("Söylenilen bir karenin birim kare cisinden içindeki kareleri bulma:");
	printf("-Karenin bir kenarını birim olarak giriniz-");
	scanf("%d",&kenar);
	printf("Söylenilen alan içerisinde bulunan kare sayısı: %d",kare(kenar));
	getch();
	
}

int kare(int n){
	if(n==1)
		return 1;
	return kare(n-1)*4+1;	
}