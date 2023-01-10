#include <stdio.h>

int main(){
	int a[20];
	a[0],a[1]=1;
	printf("Fibonacci sayıları:\n");
	for (int i=2;i<22;i++){
		a[i]= a[i-1]+a[i-2];
		printf("%d  ",a[i-2]);
	}
}