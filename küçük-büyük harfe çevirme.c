#include <stdio.h>

int main(){
	char kelime;
	printf("Kelime giriniz:");
	scanf("%c",&kelime);
	int fark='a'-'A'; //ilk önce alfabeyi küçük olarak sonra büyük olarak sıralar ve aradaki farka göre değer girer
	printf("\n%d\n",fark);
	if(kelime>'Z'){
		kelime-=fark;
	}else{
		kelime+=fark;
	}

	printf("kelime:%c",kelime);
}