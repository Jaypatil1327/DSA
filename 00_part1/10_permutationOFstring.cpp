#include<iostream>
#include<string>

using namespace std ;

void permutation(string str , string ans)
{   
    if(str.length()==0) // base base 
    {
        cout << ans << endl ; 
        return ; 
    }

    for(int i = 0 ; i < str.length() ; i++)
    {
        char ch = str[i] ; 
        string left = str.substr(0,i) ; 
        string right = str.substr(i+1) ; 

        // its will first run for ith idx and then continously calling itself upto nth idx and then run for next idx 
        
        permutation(left+right , ans+ch);
    }
}

int main()
{
    string str ;
    cout << "Enter the string : " ; 
    cin >> str ; 

    permutation(str,"") ;
}