#include <iostream>
using namespace std;
int UCLN(int a, int b){
        return a == 0 ? b: UCLN(b%a, a);
		}
int main(){
	int a,b;
	cin >> a >> b;
	int c=UCLN(a,b);
	cout << c;
}

