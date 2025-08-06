#include<iostream>
#include<vector>

using namespace std ; 

int main()
{
    vector<vector<int> > v ;

    for(int k = 1 ; k <= 5 ; k++)
    {
        vector<int> a(k);
        v.push_back(a); 
    }

    for(int i = 0 ; i<=4 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            if(j==0 || j==i) v[i][j] = 1 ; 
            else
            {
                v[i][j] = v[i-1][j] + v[i-1][j-1] ; 
            }
        }
    }

    for(int i = 0 ; i<=4 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout << v[i][j] << " " ; 
        }
        cout << endl ; 
    }


}