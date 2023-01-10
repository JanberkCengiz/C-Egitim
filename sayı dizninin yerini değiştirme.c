#include <stdio.h>

int main(){
	int a[]= {1,2,3,4,5};
	for (int i=0;i<5;i++){				//sayı kümesi normal şekildedir
		printf("a[%d]=%d\n",i,a[i]);
	}
	int q;
	for(int i=0;i<2;i++){
		q = a[i];         //sayıyı q adlı değişkenin içine kopyalar
		a[i] = a[4-i];    //sayıyı kümeden sayıldığında tam tersi konumda olan sayıyla değiştirir
		a[4-i] = q;       //kümedeki tam tersi sayıya depoladığı ilk sayıyı koyar
	}
	for (int i=0;i<5;i++){				//sayı kümesi tam tersi şekildedir
		printf("\na[%d]=%d",i,a[i]);
	}
}