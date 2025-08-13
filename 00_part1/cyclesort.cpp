#include<iostream> 
#include<vector>

using namespace std ; 

int main()
{
    vector<int> v = {5,4,3,1,2} ; 

    int i = 0 ; 
    for(int i = 0 ; i < v.size() ; i++) cout << v[i] << " "  ;
    cout << endl ; 
    while(i < v.size())  
    {
        // if(v[i]!=i+1)
        // {
        //     swap(v[i],v[v[i]-1]) ; 
        // }
        // else i++ ; 

        int correct_idx = v[i]-1  ; 
        if(correct_idx != i )
        {
            swap(v[correct_idx] , v[i]) ; 
        }
        else i++ ; 
    }
   
    for(int i = 0 ; i < v.size() ; i++) cout << v[i] << " "  ;


}