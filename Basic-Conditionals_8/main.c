/*if(v<=0)
	s=(-1)*v;
  else s=2+v;

English: Rewrite code above with "?" operator  
  
komutunu soru i�areti komutu ile yeniden yaz�n�z	
	*/
#include <stdio.h>
int main(void) {
	int s=0,v=0;
	scanf("%d",&v);
	s=v<=0? -1*v:2+v;
	printf("%d",s);
	return 0;
}
