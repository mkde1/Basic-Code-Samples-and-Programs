/*a= x==50 ? 53 : (y==40 ? 4:-4) komutunu if-else kullanarak yeniden yazýnýz

English: Rewrite code sample above with "if-else" statements

*/
#include <stdio.h>
int main(void) {
	int x=0,y=0,a=0;
	printf("Please enter x and y integer values - x,y tamsayi degerlerini sirasiyla giriniz:");
	scanf("%d %d",&x,&y);
	if(x==50)
		a=53;
	else 
		if(y==40)
			a=4;
		else 
			a=-4;			
	printf("a value - a degeri: %d\n",a);	
	return 0;
}
