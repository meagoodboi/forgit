#include <stdio.h>
int main(){
	printf ("Hello world");
	int a, b, c ;
	scanf ("%d%d%d",&a, &b, &c);
	int max = a;
	if (a<b || a<c){
		max= (b<c)? c:b;
		printf("%d", max);
	}
	else if (a==b || a==c || b==c){
		printf("co so trung nhau nha");
	}
}
