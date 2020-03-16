#include <stdio.h>
int main(){
	int a[10], n, i;
	int chan=0, le=0;
	scanf ("%d",&n);
	while (n>0){
		a[i] = n%10;
		n=n/10;
		i++;
	}
	for (int j=0; j<i; j++){
		if (a[j]%2 == 0){
			chan++;
		}
		else if (a[j]%2 != 0){
			le++;
		} 
		
	}
	printf ("%d ", chan);
	printf ("%d", le);
	return 0;
}
