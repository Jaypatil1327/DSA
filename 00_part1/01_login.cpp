#include<iostream>
#include<string>
#include<vector>

using namespace std ; 

class login
{
    public : 
        int password ; 
        int login_id ; 

    void new_cust()
    {
        cout << "Enter login id " ; 
        cin >> login_id ;  
        cout << "Enter password " ; 
        cin >> password ;
    }

    void fg_pass()
    {   int temp ; 
        cout << "Enter login id" ; 
        cin >> temp ; 

        if(temp == login_id)
        {
            cout << "Enter new pass : " ;
            cin >> password ; 
            cout << "successful!" ;
        }
    }

    void show_detil()
    {
        cout << "login_id " << login_id << " " ;
        cout << "password " << password << " " ;
    }
    
};

int main()
{
    vector<string> data ; 
    bool flag = true ; 
    string str ;  

    while(flag)
    {   
        cout << "Enter name : ";
        cin >> str ; 
        bool present = false ; 
        for(int i = 0 ; i < data.size() ; i++)
        {
            if(str == data[i])
            {
                present = true ; 
                break;
            }
        }

        if(!present)
        {   
            data.push_back(str) ;
            login str ; 
        }

        if(!present) cout << "1.To create account : " << "\n";
        else cout << "custor already exist << \n" ;   
        cout << "2.To check details " << "\n" ; 
        cout << "3.forget Password : " << "\n";  
        cout << "4.print detil" << "\n" ; 

        string s ;
        getline(cin , s) ; 

        if(s == (string)"To create account") cout << "hello " ; 

    }
}