#include <iostream>
using namespace std;
int main(){
	int a,b;
	int tong=0;
	cin >>a>>b;
	if (a<b){
	for (int i=a;i<=b;i++){
		tong +=i;
		}
	cout<< tong;
	}
	else if (a>b);
	for (int i=b; i<=a; i++){
		tong+=i;
	}
	cout << tong;
}
