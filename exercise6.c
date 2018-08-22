#include <stdio.h>
#include <stdlib.h>
int main(){
	//metreissä
	float pallo = 0.3;
	printf("Give ball radius in meters: ");
	scanf("%f",&pallo);
	float tilavuus = 1.33333*3.14159265359*(pallo*pallo*pallo);
	float litroja = tilavuus*1000;
	float gallonia = litroja*0.264172052;
	float palloleveys= pallo*2;
	printf("%.2f m ball \nBall is %.2f in liter and US Gallons equals to  %.2f\n",palloleveys,litroja,gallonia);
	system("pause");
	return 0;
}