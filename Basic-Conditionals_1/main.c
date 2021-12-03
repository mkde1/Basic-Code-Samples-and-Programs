/* English: Draws "not p or q" table on the display 
~pVq onermesinin dogruluk tablosunu hesaplayacak ve ekranda gosterecek programi yaziniz*/
#include <stdio.h>
int main(void) {
	int d=1,y=0;//d=true - dogru, y=false - yanlis
	printf("  p   q   ~pVq\n");
	printf("--------------\n");
	printf("%3d%4d%6d\n",d,d,!d||d);
	printf("%3d%4d%6d\n",d,y,!d||y);
	printf("%3d%4d%6d\n",y,d,!y||d);
	printf("%3d%4d%6d\n",y,y,!y||y);
	return 0;
}
