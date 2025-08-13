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

void swap(vector<int> &a , int i , int j )
{
    int temp = a[i] ; 
    a[i]=a[j] ; 
    a[j]=temp ; 
}

int main()
{
    vector<int> v ; 

    v.push_back(2) ;
    v.push_back(1) ;
    v.push_back(0) ;
    v.push_back(2) ;
    v.push_back(0) ;
    v.push_back(0) ;
    v.push_back(1) ;
    v.push_back(1) ;
    v.push_back(0) ;
    v.push_back(0) ;

    int low = 0 ; 
    int mid = 0 ; 
    int hi = v.size()-1 ; 

    while(mid<=hi)
    {
        if(v[mid]==2)
        {
            swap(v,mid,hi) ;
            hi--;
        }
        else if (v[mid]==0)
        {
            swap(v,low,mid);
            mid++ ;
            low++ ;  
        }
        else if (v[mid]==1) mid++ ; 
    }

    output(v);
}