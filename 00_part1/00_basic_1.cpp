#include<iostream>
using namespace std ; 
// greeting code 
void greetingcode()
{
    cout << "Computing code \n" ;  
}

//priting the pattern 
void pattern(int n)
{
    for(int i = 1 ; i <= n ; i++) // compute the code and return the value at time of calling 
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout << "*" ; 
        }
        cout << endl ; 
    }
}
// checking for condition of do-while loop 
bool flagchecker(char ch)
{
    if(ch==(int)121) return true ; 
    return false ; 
}

int main(){

    int a ; 
    char ch ; 
    bool flag = true ; // It will start  from flag true

    cout << "Enter \n" ; 

    do
    {
        cin >> a ; 
        pattern(a) ; //goes to line numb (4)
        // and the passing the value of a 
        cout << "Enter y/n to do again \n" ; 
        cin >> ch ;    
    }
    while(flagchecker(ch) == true);
    
}