#include<iostream>
#include<vector>

using namespace std ; 

void display(vector<int>& a)
{
    a.at(0) = 12 ; 
}

int main()
{
    vector<int> v ; 

    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(8);
    v.push_back(10);

    for(int i = 0 ; i< v.size() ; i++)
    {
        cout << v.at(i) << " " ; 
    }
    cout << endl ;

    display(v) ; 
    for(int i = 0 ; i< v.size() ; i++)
    {
        cout << v.at(i) << " " ; 
    }

}