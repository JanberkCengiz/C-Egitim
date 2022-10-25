#include <stdio.h>

int main(){
	int a=9;
	int b=2,c=8;
	printf("%d", a+b);
	printf("\n %d", a<<2); //ikilik sistemde (0,1 li sistem) 1 sayısını 2 sola kaydırır, 2 tane 0 ekler
	printf("\n %d", a>>2);//ikilik sistemde 1 sayısını 2 sağa kaydırır, 2 tane 0 ekler
}