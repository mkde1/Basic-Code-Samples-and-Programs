#include <stdio.h>
int main(void) {
	float en=0.0, boy=0.0 ,yuks=0.0 ,mkup= 0.0;
	printf("Pool's width, length, and height/Havuzun eni, boyu, yuksekligi: ");
	scanf("%f %f %f",&en,&boy,&yuks);
	mkup=en*boy*yuks;
	printf("Pool can take %.2f cubic meters of water(Havuz %.2f metrekup su alabilir)",mkup);
	return 0;
}
