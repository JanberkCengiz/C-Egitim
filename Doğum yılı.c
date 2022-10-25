#include <stdio.h>

int main(){
	int a,b;
	printf("Doğum tarihi hesaplamak için şuanki yılı ve yaşınızı sırasıyla yazınız");
	printf("\nBulunduğunuz yıl:");
	scanf("%d",&a);
	printf("Yaşınız:");
	scanf("%d",&b);
	printf("Doğum yılınız: %d",a-b);
}