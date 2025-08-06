#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 

void dis(vector<int> &a)
{
    for(int i = 0 ; i <= a.size()-1 ; i++ )
    {
        cout << a.at(i) << " " ; 
    }
}

void out(vector<int> &a)
{
    for(int i = 0 ; i <= 9 ; i++ )
    {
        int x ; 
        cin >> x ;
        a.push_back(x); 
    }
}
int main()
{
    vector<int> v ; 
    cout << "enter : " ; 
    out(v) ; 

    int tg ; 
    cout << "Enter target :" ; 
    cin >> tg ; 
    
    int n = v.size()-1 ; 
    // for(int i = 0 ; i <= n-1 ; i++ )
    // {
    //     for(int j = 1; j <= n ; j++)
    //     {
    //         if(v[i]+v[j]== tg)
    //         {
    //             cout << "( " << v[i] << " , " << v[j] << " )" ; 
    //         }
    //     }
    // }

    // method 2 
    sort(v.begin(),v.end());

    int i = 0 ; 
    int j = n ; 

    while(i < j)
    {
    if(v[i] + v[j] < tg)
        i++ ;
    else if (v[i] + v[j] > tg)
        j--;
    else 
    {
        i++;
        j-- ; 
    }
}


}