#include <stdio.h>
int main(){
	int n;
	int h=1;
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		for (int j=1; j<= n; j++){
			printf ("%d ",h);
			h++;
		}
	printf("\n");
	}
}
