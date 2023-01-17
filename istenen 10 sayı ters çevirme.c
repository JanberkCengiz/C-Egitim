#include <stdio.h>

int main(){
	int x;
	int a[10];
	printf("Sayıları giriniz;\n");
	for (int b=0;b<10;b++){
		printf("%d->",b+1);
		scanf("%d",&a[b]);
	}
	printf("\nSayılar(ilk);\n");
	for (int i=0;i<10;i++){
			printf("%d  ",i,a[i]);
	}
	int q;
	for(int c=0;c<4;c++){
		q = a[c];
		a[c] = a[9-c];
		a[9-c] = q;
	}
	printf("\nSayılar(son);");
	for (int i=1;i<11;i++){
		printf("\n%d=%d",i,a[i-1]);
	}
}
