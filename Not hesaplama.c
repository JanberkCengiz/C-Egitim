#include <stdio.h>


int main(){
	int not;
	
	printf("\nLütfen notunuzu giriniz:");
		scanf("%d" , &not);
		
	while(not<0 || not>100) {
		printf("\nLütfen notunuzu düzgün bir şekilde giriniz:");
		scanf("%d" , &not);
	}
	
	if(not>=90 && not<=100){
		printf("\nDereceniz: AA");
	}
	
	else if(not < 90 && not >=80){
		printf("\nDereceniz: BA");
	}
	
	else if(not < 80 && not >= 70){
		printf("\nDereceniz: BB");
	}
	
	else{
		printf("\nDereceniz: F");
	}
}