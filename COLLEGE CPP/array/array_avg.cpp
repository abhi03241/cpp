#include<iostream>
using namespace std ;

int main()
{
    int i , n ; 
    float  arr[10] , sum = 0 ,  average = 0 , max , min  ;
    cout<<"Enter the number elements of array :"<<endl;
    cin>>n;


    for(i = 0 ; i <n ; i++ )
    {
        cout<< i + 1 <<" Enter numbers "<<endl;
        cin>>arr[i];
        sum = sum + arr[i];

    }

    min = max = arr[0];
    for( i = 0; i < n ; i++)
    {
       if (min > arr[i]) 
       {
            min = arr[i];
       }
    }
    
     for( i = 0; i < n ; i++)
    {
       if (max <  arr[i]) 
       {
            max = arr[i];
       }
    }
    
    //  ---> sum 
    cout<< "SUM OF ARRAY IS :"<<sum ;

    // *** average ***
    average = sum/n ;
    cout << "AVERAGE IS : " << average<<endl ;

    //  ** maximum and minimum **
    cout << " MAXIMUM  : "<<max<<endl; 
    cout << " MAXIMUM  : "<<min<<endl;

    return 0 ;
}