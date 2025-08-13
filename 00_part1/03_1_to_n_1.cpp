#include<iostream> 
using namespace std ; 

int main(){
    int n ; 
    cout << "Enter number \n" ; 
    cin >> n ;  
    for(int i = 1 ; i <= n ; i++){

        if(i % 2 == 0){
            if(i==2) cout << "two"; 
             else if(i=4) cout << "four\n" ;
              else if(i==6) cout <<"six\n" ;
                else if(i==8) cout <<"eight\n" ;
                 else if(i==10) cout <<"ten\n" ;
                  else if(i==12) cout <<"twelve\n" ; 
                   else if(i==14) cout <<"fourteen\n" ;
                    else if(i==16) cout <<"sixteen\n" ;
                     else if(i==18) cout <<"eighteen\n" ;
                      else if(i==20) cout <<"twenty\n" ;
            if((i<=22) && i%2==0 )
                cout << i ; 
            cout << " even\n" << endl ; 
            
            if(i>0)
             cout << i << " odd\n" ; 

            else 
            break; 
        }

        // else 
        // cout << "zero\n" ;
        // break;
   
    }

}




    //  for(int i = 1 ; i <= n ; i++){
    //     if(i%2==0)
    //     cout << i <<" even"  << endl ; 
    //     else 
    //     cout << i << " odd\n" ; 
    // }

