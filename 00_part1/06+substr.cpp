#include<iostream>
using namespace std;
int main()
{
    string str = "hello" ; 
    cout << str.substr(1) << endl ; // 1 to last element 
    cout << str.substr(1,3) << endl ; // 1 to 3 
    cout << str ; 
 return 0;
}