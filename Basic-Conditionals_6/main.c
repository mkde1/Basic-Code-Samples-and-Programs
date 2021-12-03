/*English: Takes y as a real number then calculates the fucntion g(y) according to the y's value and prints the result on the screen

Bir reel sayý y'yi girdi olarak alan ve y'nin deðerine göre aþaðýda verilen g(y) fonksiyonunu hesaplar
bir C programý yazýnýz.
		sqrt(y^3+1),	y>10
g(y)	e^y-10,			10>=y>=0	
		y/y+15,			y<0
*/ 
#include <stdio.h>
#include <math.h>
int main(void) {
	float y=0.0,g=0.0;
	printf("Please enter \"y\" real number - Bir y reel sayisi giriniz: ");
	scanf("%f",&y);
	if(y<0)
		g=y/(y+15);
	else{
		if(y<=10)
			g=exp(y)-10;
		else
			g=sqrt((pow(y,3))+1);	
	}	
	printf("%.4f\n",g);
	return 0;
}
