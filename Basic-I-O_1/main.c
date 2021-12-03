/*Kullanıcıdan bir dikdörtgenin kenar uzunluklarını alan ve ekranda 
bu dikdörtgenin alan ve çevresini gösteren programı yazınız*/
/*Takes long side and short side of a rectangle and calculates area & circumference*/ 
#include <stdio.h>
int main(void) {
	float u=0;//uzun kenar-long side
	float k=0;//kısa kenar-short side
	printf("Lutfen uzun kenari giriniz/Please enter the long side:");
	scanf("%f",&u);
	printf("Lutfen kisa kenari giriniz/Please enter the short side:");
	scanf("%f",&k);
	printf("Alan(Area)=%6.2f\n",u*k);
	printf("Cevre(Circumference)=%6.2f",2*(u+k));
	return 0;
}
