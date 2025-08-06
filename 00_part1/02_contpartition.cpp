#include<iostream>
#include<vector> 

using namespace std;
int main()
{
    vector<int> n = {10,6,4} ; 

    for(int i = 1 ; i < n.size() ; i++) n[i] = n[i-1] + n[i] ; 

    int i = 0 , j = n.size()-1 ; 

    while(i<=j)
    {
        int mid = (i+j)/2 ;

        if(2 * n[mid] == n[n.size() - 1 ] ){ 
            cout << "true" ; 
            return 0 ; 
        }
        else if (2*n[mid] > n[n.size() - 1 ]) j = mid-1 ; 
        else i = mid+1 ; 
    }
    cout << "false" ; 
 return 0;
}
