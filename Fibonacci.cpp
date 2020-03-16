#include <stdio.h>
int fi(int n){
	if (n==0 || n==1){
		return n;
	}else
		return fi(n-1)+fi(n-2);
}
int main(){
	int n ;
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		printf ("%d ", fi(i));
	}
	//printf ("so fi thu n la %d", fi(n));
	return 0;
}
