#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char c[100];
	int n;
	gets(c);
	n = strlen(c)-1;
	for (int i=n; i>=0; i--){
		cout << c[i]<< " ";
	}
	return 0;
}
