#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter any number : "<<endl;
    cin>>n;

    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1 ; j <= n; j++)
        {
            char ch = 'A' + i -  1 ;  // *** Basic logic ***
            cout<<ch <<" ";

        }
        cout<<endl;
    }
    

    return 0 ;
}

/*#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter any number : "<<endl;
    cin>>n;

    int row = 1;
    while(row <= n) {

        int col = 1;

        while(col <= n) {
            char ch = 'A' + row - 1;
            cout<< ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}*/