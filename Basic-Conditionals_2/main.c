/* English: -Asks for a square or a rectangle.
			-Asks for sides
			-Calculates the area of the shape

			-Kare veya dikdörtgen seçimi
			-Kenar uzunluğu/uzunlukları girilir
			-Seçilen cismin alanı hesaplanır
*/
#include <stdio.h>
int main(void) {
	float k1=0.0,k2=0.0;
	char ch;
	printf("Choose your shape k/K for square or d/D for rectangle - Seklinizi seciniz k/K(Kare) veya d/D(Dikdortgen):");
	scanf("%c",&ch);
	if((ch=='k')||(ch=='K')){
		printf("Enter the side of the square - Karenin kenarini giriniz: ");
		scanf("%f",&k1);
		printf("Square's area - Karenin alani: %.2f",(k1*k1));
	}if((ch=='d')||(ch=='D')){
		printf("Enter the sides of the rectangle - Dikdortgenin kenarlarini giriniz: ");
		scanf("%f %f",&k1,&k2);
		printf("Rectangle's area - Dikdortgenin alani: %.2f",k1*k2);
	}
	return 0;
}
