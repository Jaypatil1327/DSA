#include<iostream>
using namespace std ; 

void maze(int rows , int cols , string s)
{   
    if(rows <1 || cols <1 ) return ;
    if(rows == 1 &&  cols == 1)
    {
        cout << s << endl ; 
        return ;  
    }

    maze(rows , cols-1 , s+'R') ; 
    maze(rows-1 ,cols ,  s+'D')  ; 
}

int main()
{
    maze(2,2,"") ; 
}