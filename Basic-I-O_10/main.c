/*English: Swaps alpha and beta variables with creating a temporary variable called "gecici"
alfa ve beta deðiþkenlerine atanan deðerlerin yerini deðiþtiren C programý*/
#include <stdio.h>
int main(void) {
	int alfa=0.0,beta=0.0,gecici=0.0;//gecici= temporary variable - geçici bir deðer
	printf("Enter an integer as alpha - alfa degiskeni icin bir tamsayi giriniz: ");
	scanf("%d",&alfa);
	printf("Enter an integer as beta - beta degiskeni icin bir tamsayi giriniz: ");
	scanf("%d",&beta);
	gecici=alfa;
	alfa=beta;
	beta=gecici;
	printf("New alpha value - Yeni alfa degeri: %d\n",alfa);
	printf("New beta value - Yeni beta degeri: %d\n",beta);
	return 0;
}
