#include <stdio.h>

int main(){
	
	int x;
	int a[10];
	printf("Kaydetmek istediğiniz rakamları yazınız(10)\n");
	for (int i=0;i<10;i++){
		printf("%d->",i+1);
		scanf("%d",&a[i]);
		}
		printf("Görmek istediğiniz sayının numarasını giriniz->");
		scanf("%d",&x);
		printf("%d=%d",x,a[x-1]);
	}