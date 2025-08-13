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
void input(vector<int> &a , int n)
{
    for(int i = 0 ; i <= n-1 ; i++)
    {
        int x ; 
        cin >> x ;
        a.push_back(x);
    }
}

void reversepart(int i , int j , vector<int>&a)
{
    while(i<=j)
    {
        int temp = a[i] ; 
        a[i] = a[j] ;
        a[j] = temp ; 
        // upadating the pointer of i and j 
        j-- ;
        i++ ; 
    }
}

int main()
{
    vector<int> v;
    int n ; 
    int i , j ; 

    cout << "Enter " ; 
    cin >> n ; 

    input(v,n);

    // cout << "rev the array from idx : " ; 
    int k = 2 ;
    if(k>=n) k = k=k%n ;  
    // reverse part code 
    reversepart(0, n-1-k , v) ;
    reversepart(n-k , n-1 ,v);
    reversepart(0,n-1,v) ;
    output(v) ; 

}
