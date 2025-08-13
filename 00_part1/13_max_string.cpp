#include<iostream>
#include<string>
#include<vector>

using namespace std ; 

int main()
{
    vector<string> v ; 
    string str ; 
    cout << "to stop filling element enter exit" ; 
 
    while(cin>>str)
    {   if(str=="exit")break;
        v.push_back(str);  
    }


    int max = stoi(v[0]) ; 
    string store ; 

    for(int i = 1 ; i<= v.size()-1 ; i++)
    {
        if(max<stoi(v[i]))
        {
            max = stoi(v[i]) ; 
        }
    }
    cout << to_string(max) ; 
}