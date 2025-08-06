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

void sort(vector<int> &v)
{  
    int i = 0 ; 
    int j = v.size()-1 ;
    while(i<j)
    {
        if(v[i]==0) i++ ; 
        if(v[j]==1) j-- ;   
// its can exceed after i < j so we can use else or break in 
        else if(v[i]==1 && v[j]==0)
        {
            v[i] = 0 ; 
            v[j] = 1 ; 
            j-- ; 
            i++ ; 
        }
    }
}

int main()
{
    vector<int> v ;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1); 
    sort(v) ;  
    output(v);

}
