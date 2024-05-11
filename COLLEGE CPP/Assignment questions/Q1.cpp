#include<iostream>
using namespace std ;

void max_min(int arr[] ,int n )
{
    int max = arr[0] , min = arr[0] ,sum = 0 ;
    for (int i = 0; i < n  ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i]  ;
            cout<<"max element is : "<< max<<endl;
        }
        if(arr[i] < min)
        {
            min = arr[i] ;
            cout<<"min element is : "<< min<<endl;
        }

    }

    for (int i = 0; i < n  ; i++)
    {
       sum += arr[i];
    }

    cout<<"Sum is : "<<sum<<endl;
    
}

int main()
{
    int arr[50] , n = 0 ;
    cout<<"enter no of Elements you want"<<endl;
    cin>>n; 

    cout<<"Enter the elements of array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    max_min(arr,n);

    cout<<"Elements of an array are : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0 ;
}