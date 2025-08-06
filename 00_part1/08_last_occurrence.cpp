#include<iostream>
#include<vector>

using namespace std ; 

int search1(vector<int> &n , int &x)
{   
    int idx = -1 ; 
    for(int i = 0 ; i < n.size() ; i++ )
    {
        if(n[i]==x) idx = i ; 
    }
    return idx ;
}

// optimal way 
int search2(vector<int> &n , int &x)
{   
    int idx = -1 ; 
    for(int i = n.size()-1 ; i >= 0 ; i-- )
    {
        if(n[i]==x)
        {
            idx = i ; 
            break;
        }
    }
    return idx ;
}

int main()
{
    vector<int> v ; 
    cout << "Enter the elements : " ; 

    for(int i =0 ; i < 6 ; i++ )
    {
// cin >> v[i] won,t be useful bcz idx is not given 

        int x ; 
        cin >> x ; 
        v.push_back(x) ; 
    }

    cout << "enter the num to find last occurrence : ";
    int x ; 
    cin >> x ; 

    cout << "last occurrence on " << search2(v,x ) ; 

}
