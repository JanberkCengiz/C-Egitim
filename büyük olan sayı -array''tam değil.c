#include <stdio.h>

int main(){
	int a[10]= {2,4,6,8,10,12,14,16,10,20};
	int x;
	for (int i=1;i<10;i++){
		if (a[i-1]<a[i]){
			x=a[i];
			printf("%d\n",x);
		}
	}
	
}