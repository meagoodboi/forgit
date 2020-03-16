#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int mark;
	while (n>0){
	int du = n%10;
	if (du!=0 && du!=8 && du!=6) mark=0;
	else mark=1;
	n/=10;
	}
	if (mark==1) cout<< "1";
	else cout << 0;
	return 0;
}
