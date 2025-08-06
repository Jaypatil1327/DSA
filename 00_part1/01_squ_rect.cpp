#include<iostream>
using namespace std ; 

void print(int x , int y)
{
    for(int i =1 ; i <= x ; i++)
    {
        for(int j = 1 ; j <= y ; j++)
        {
            cout << "*" ; 
        }
        cout << "\n" ; 
    }
}

int main()
{
    int a ; 
    int b ; 

    cout << "Enter row : ";
    cin >> a ; 
    cout << "Enter the column : " ;
    cin >> b ; 

    if(a==b) cout << "Its square\n" ; 
    else cout << "Its rectangle\n" ;

    print(a,b) ; 
    

}
