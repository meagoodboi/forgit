#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum=1, du;
	while (n>0){
		du=n%10;
		n/=10;
		sum*=du;
	}
	cout << sum;
}
