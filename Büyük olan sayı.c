#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("3 tane sayı giriniz;\n");
	printf("1.Sayı:");
	scanf("%d",&a);
	printf("\n2.sayı:");
	scanf("%d",&b);
	printf("\n3.sayı:");
	scanf("%d",&c);
	while (a==b || a==c || b==c){
		printf("Lütfen farklı sayılar giriniz:");
		printf("\n1.Sayı:");
		scanf("%d",&a);
		printf("\n2.sayı:");
		scanf("%d",&b);
		printf("\n3.sayı:");
		scanf("%d",&c);
	}
	if (a>b && a>c){
		printf("Büyük olan sayı:%d",a);
	}
	else if (b>a && b>c){
		printf("Büyük olan sayı:%d",b);
	}
	else if (c>a && c>b){
		printf("Büyük olan sayı:%d",c);
	}
}