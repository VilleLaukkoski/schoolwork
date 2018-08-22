#include <stdio.h>
int main(){
	int squareA;
	int squareB;
	squareA = 7;
	squareB = 12;
	int resultA = squareA*squareA;
	int resultB = squareB*squareB;
	int fit = resultB/resultA;
	printf ("%d",fit);
	getchar();
	return 0;
}