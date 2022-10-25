#include <stdio.h>

int main(){
	float pi = 3.14; // değişkene tam sayı harici kesirli sayı verilecekse int yerine float ile atanır.
	int a;
	printf("\n %d",(int)pi); // eğer float ile tanımlanmış bir değişkeni %d ile gösterirsek gösterilirken tam sayı kısmı gösterilir.
	printf("\n %f",pi);      // %f ile gösterirsek hiçbirşey değişmeden ondalık sayı olarak gösterilir.
	a=pi;					 // eğer float ile tanımlanmış bir değişkeni int ile tanımlanmış bir değişken içine atarsak float özelliğini yeniden kaybeder.
	printf("\n %d",a);
	a=2.15*3;
	pi=2.15*3;
	printf("\n %d, %f",a,pi);
	
}