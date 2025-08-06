#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string str = "Jayesh nitin patil" ; 
    cout << str.size()  << endl ;

    str.push_back('o'); 
    cout << str << endl; 

    str = str + "xyz" ; 
    cout << str << endl ; 

    str = "xyz" + str ; 
    cout << str << endl ; 

    reverse(str.begin()+10,str.end()) ; 
    cout << str ; 
    

 return 0;
}