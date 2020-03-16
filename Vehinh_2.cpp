#include<stdio.h>
int main(){
 int n ; 
 scanf("%d", &n);
 for(int i =1 ; i<=n ; i++){
 	for(int j = 1 ; j<= n ; j++){
 		if(i<=j)
 			printf("%5d",n-i+1);
		 else printf("%5d", n-j+1);
 	}
 	printf("\n"); 
 }
 return 0 ;
}
