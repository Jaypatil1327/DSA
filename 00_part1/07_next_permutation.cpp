#include<iostream>
#include<vector>

using namespace std ; 

void swap(vector<int> &v , int i , int j)
{
    while(i<=j)
    {
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp ;
        i++ ;
        j-- ;
    }
}

void output(vector<int> v)
{
    for(int i = 0 ; i<= v.size()-1; i++)
    {
        cout << v.at(i)  << " "; 
    }
}

void input(vector<int> &v )
{
    for(int i = 0 ; i<= v.size()-1; i++)
    {
        cin >> v[i] ; 
    }
}

int main()
{
    int x ; 
    cout << "Enter size of vector:" ; 
    cin >> x ; 

    vector<int> v(x); 
    input(v) ; 

    int n = v.size() ; 
    //finding pivot idx ;

    int idx = -1 ; 

    for(int i = n-2 ; i>= 0 ; i--)
    {
        if(v[i]<v[i+1])
        {
            idx = i ; 
            break ; 
        }
    } 
    // for exception 

    if(idx==-1)
    {
        swap(v,0,n-1); 
    }

    swap(v,idx+1,n-1) ; 

    int jg = -1 ; 

    for(int i = idx+1 ; i<=n-1 ; i++)
    {
        if(v[idx]<v[i])
        {
            int temp = v[idx] ; 
            v[idx] = v[i]; 
            v[i] = temp ; 
            break ; 
        }
    }


    output(v) ; 
}
