#include <stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	int max=a;
	if (a<b || a<c ){
		max = (b>c)? b:c;
	}
	printf ("%d", max);
	return 0;
	
}
