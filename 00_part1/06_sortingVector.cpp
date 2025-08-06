#include<iostream>
#include<vector>
#include<algorithm> // use algorithm function to use sort function  

using namespace std;
int main()
{
    vector<int> v ; 
 
    for(int i = 0 ; i < 5 ; i++ )
    {   
        int x ; 
        cin >> x ; 
        v.push_back(x) ;
    }
    // v.push_back(12) ;
    // v.push_back(11) ;
    // v.push_back(13) ;
    // v.push_back(14) ;
    // v.push_back(14) ;
    // v.push_back(124) ;
    // v.push_back(1) ;
    // v.push_back(2) ;
    // v.push_back(2) ;

    for(int i = 0 ; i < v.size() ; i++ )
    {   
        cout << v[i] << " "; 
    }
    cout << endl ;

    // using sort func  
    sort(v.begin() , v.end());

    for(int i = 0 ; i < v.size() ; i++ )
    {   
        cout << v[i] << " "; 
    }

 return 0;
}