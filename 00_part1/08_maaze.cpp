#include<iostream>
using namespace std ; 

int maze(int sc , int sr , int er , int ec)
{
    // base condition 
    if(sc > ec || sr > er ) return 0 ; 
    if (sc==ec && sr == er) return 1 ; 

    int rightways = maze(sc+1 , sr , er , ec ) ; 
    int downways = maze(sc , sr+1 , er , ec) ; 

    return rightways+downways  ; 
}

void printmaze(int sc , int sr , int er , int ec , string s )
{
    // base condition 
    if(sc > ec || sr > er ) return ;  
    if (sc==ec && sr == er)
    {
        cout << s << endl ; 
        return ; 
    } 
    printmaze(sc+1 , sr , er , ec , s+"R") ; 
    printmaze(sc , sr+1 , er , ec , s+"D") ; 

}

int main()
{   int rows ; 
    int col ; 
    cout << "ENter num of rows " ; 
    cin >> rows >> col ; 
    printmaze(1,1,rows,col,"") ; 
}