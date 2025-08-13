#include<iostream>
#include<vector>
using namespace std ; 
void output(vector<int> &a)
{
    for(int i = 0 ; i <= a.size()-1 ; i++)
    {
        cout << a.at(i) << " "; 
    }
    cout << endl ; 
}

void sort01(vector<int> &v)
{   
    int noz = 0 ; 
    int noo = 0 ;
 // counting 0s and 1s 
    for(int i=0 ; i<= v.size()-1 ; i++)
    {
        if(v[i]==0) noz++ ; 
        else noo++ ; 
    }
 // filling elements in vector 
    for(int i = 0 ; i <= v.size()-1 ; i++ )
    {
        if(i<noz) v[i] = 0 ; 
        else v[i] = 1 ; 
    }
}

int main()
{
    vector<int> v ;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1); 
    sort01(v) ; 
    output(v);

}