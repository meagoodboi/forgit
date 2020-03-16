#include <stdio.h>
int check(int a[], int n){
	int l=0, r=n-1;
	while (l<r){
		if (a[l] != a[r]){
			return 0;
		}
	l++;
	r--;
	}
	return 1;
}
int main(){
	int a[100], n;
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	if(check(a,n)){
		printf("1");
	}
	else printf("0");
	return 0;
}
