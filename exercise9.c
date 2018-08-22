#include <stdlib.h>
#include <stdio.h>
int main(){	
	printf("Input your age: \n");
	int age=0;
	scanf("%d",&age);
	if(age<18){
		printf("You're too young to drive.\n");
	} else if(age>=65){
		printf("You're likely to be retired.\n");
	} else {
		printf("You're old enough to get a drivers license.");
	}
	system("pause");
}