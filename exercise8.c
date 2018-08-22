#include <stdio.h>
#include <stdlib.h>
int main(){
	int day=0;
	int month=0;
	int year=0;
	int curDay=0;
	int curMonth=0;
	int curYear=0;
	int result=0;
	printf("AGE CALCULATOR\n");
	printf("Input day you were born: \n");
	scanf("%d",&day);
	printf("Input month you were born: \n");
	scanf("%d",&month);
	printf("Input year you were born: \n");
	scanf("%d",&year);
	printf("Input day of the today: \n");
	scanf("%d",&curDay);
	printf("Input month of the today: \n");
	scanf("%d",&curMonth);
	printf("Input year of the today: \n");
	scanf("%d",&curYear);
	printf("%d\n",result);
	result=curYear-year;
	printf("%d\n",result);
	if(year!=curYear){
		if(curMonth<month){  
			result--;
		} else if(curMonth==month){
			if(curDay<day){
				result--;
			}
		}
	}
	printf("YOU ARE: %d years old.",result);
	system("pause");
}