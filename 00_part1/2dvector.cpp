#include<vector>
#include<iostream> 

using namespace std ;

int main()
{
    vector<vector<int>> num = {{1,2,3},{4,5,6},{2,4,534,1}} ; 

    for(int i = 0 ; i < num.size() ; i++)
    {
        for(int j = 0 ; j < num[i].size() ; j++)
        {
            cout << num[i][j] << " "; 
        }
        cout << endl ; 
    } 
}