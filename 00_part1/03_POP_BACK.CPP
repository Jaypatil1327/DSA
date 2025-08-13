#include<iostream>
#include<vector>

using namespace std ; 

int main()
{
    vector<int> arr ; 

    arr.push_back(12);
    arr.push_back(11);
    arr.push_back(10);
    arr.push_back(9);
    arr.push_back(8);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(1) ; 

// capacity to store elements 
    cout << arr.capacity() << endl ; 

//for printing vector 
    for(int i =0 ; i<= arr.size();i++)
    {
        cout << arr[i]  << " " ; 
    }

    cout << endl ;
// size of vector at current time 
    cout << arr.size() << endl ; 

// pop out element from the vector 
    arr.pop_back();

    for(int i =0 ; i<= arr.size();i++)
    {
        cout << arr[i]  << " " ; 
    }
    cout << endl ;
// so here the capacity is same but size changed bcz we have pop out the element  

    cout <<arr.size() << " " << arr.capacity() << endl ;    


}