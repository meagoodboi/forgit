#include <iostream>
using namespace std; 
 
int main()
{
    char kyTu;
    cin >> kyTu;
     
    if((kyTu >= 'a' && kyTu <= 'z') || (kyTu >= 'A' && kyTu <= 'Z')) {
        cout << "1";
    } else {
        cout << "0";
    }
 
    return 0;
}
