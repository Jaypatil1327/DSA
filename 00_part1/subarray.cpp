#include<iostream>
#include<vector>

using namespace std ;

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9}  ;

    int k ; 
    cout << "Enter size of window : " ; 
    cin >> k ; 

    int prev = 0 ;

    int i = 0 ; int j = 0 ; 

    while(j < v.size())
    {
        prev+=v[j] ; 

        if(j-i+1 >= k)
        {   cout << prev << " " ; 
            prev-=v[i] ; 
            i++ ; 
        }

        j++ ; 
    }
}