#include <iostream>
using namespace std;
int main(){
	char c;
	int chu=0, so=0, kitu=0;
	cin >> c;
	while (c < 100){
	
	if ((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z')){
		chu++;
	}
	else if (c >= '1' && c <= '9'){
		so++;
	} 
	else{
		kitu++;
	}
	cout << chu << " " << so << " " << kitu;
	}
}

