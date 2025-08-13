#include<iostream>
#include<vector>

using namespace std ; 

int main()
{
    vector<int> v(5,7) ;// vector with size 5 and capacity 5 and every term is intializied with 7

    cout << v.capacity() << "\n";
    cout << v.size()  << " "; 
    v.push_back(10) ; 
    cout << v.capacity(); 
    cout << endl ; 

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i]  << " "; 
    }




}