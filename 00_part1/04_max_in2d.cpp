#include<iostream>
#include<climits>
using namespace std ;

int main()
{
    int m ;
    cout << "enter the num of rollno : ";
    cin >> m ;

    int n ; 
    cout << "enter the num of marks :" ;
    cin >> n ; 

    int arr[m][n];

    for(int i = 0 ; i<=m-1 ; i++)
    {
        for(int j=0 ; j<=n-1; j++)
        {
            cin >> arr[i][j];
        }
    }
// // for max
//     int max = INT_MIN;
//     for(int i = 0 ; i<=m-1 ; i++)
//     {
//         for(int j=0 ; j<=n-1; j++)
//         {
//             if(max<arr[i][j])
//             {
//                 max=arr[i][j];
//             }
//         }
//     }

// for min 
        int min = INT_MAX ;

        for(int i = 0 ; i<= m-1 ; i++)
        {
            for(int j = 0 ; j<= n-1 ; j++)
            {
                if(min>arr[i][j])
                {
                    min = arr[i][j] ; 
                }
            }
        }
        cout << min ; 

}