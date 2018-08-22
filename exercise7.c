#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("for loop \n");
	for(int i=0;i<=9;i++){
		int square=i*i;
		printf("%d and square %d \n",i,square);
	}
	printf("while loop\n");
	int a=0;
	while(a<=9){
		int square=a*a;
		printf("%d and square %d \n",a,square);
		a++;
	}
	a=0;
	printf("do while loop\n");
	do{
		int square=a*a;
		printf("%d and square %d \n",a,square);
		a++;
	}while (a<=9);
	system("pause");
}