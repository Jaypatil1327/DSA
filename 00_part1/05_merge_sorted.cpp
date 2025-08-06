#include<iostream>
#include<vector>
using namespace std;

void output(vector<int> &a)
{
    for(int i = 0 ; i <= a.size()-1 ; i++)
    {
        cout << a.at(i) << " "; 
    }
    cout << endl ; 
}

vector<int> merge(vector<int>&a , vector<int>&b)
{
    int n = a.size(); 
    int m = b.size(); 

    vector<int> v(n+m) ;

    int i = 0;  // a 
    int j = 0;  //b 
    int k = 0;  // result

    while(i<=n-1 && j<=m-1) //until i and j (-1 )
    {
        if(a[i]<b[j])
        {
            v[k] = a[i] ;
            i++ ; 
        }
        else
        {
            v[k]= b[j] ; 
            j++;
        }
        k++ ; 
    }

// for remaing part of array those are missing 
    if(i==n)
    {
        while(j<=m-1)
        {
            v[k]=b[j]; 
            j++ ; 
            k++ ; 
        }
    }

    if(j==m)
    {
        while(i<=n-1)
        {
            v[k]=a[i]; 
            i++ ; 
            k++ ; 
        }
    }

    return v ; 
}

int main()
{
    vector<int> v1 ;
    vector<int> v2 ;

    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);

    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);

    vector<int> v = merge(v1 , v2) ;  
    output(v); 

 return 0;
}