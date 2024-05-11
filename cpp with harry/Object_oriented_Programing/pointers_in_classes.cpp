#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // new operator!
  
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;


    // ----> anoter example

    int *arr = new int[3];
    arr[0] = 10;

    *(arr + 1) = 20; // ---- > we can also write this !!
    
    arr[2] = 30;

     // delete operator!
    delete[] arr; // ----> this will free array


    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;



    return 0;
}
