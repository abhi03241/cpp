#include <iostream>

class MyArray {
private:
    int* arr;
    int size;

public:
    MyArray(int s) : size(s), arr(new int[s]) {}

    MyArray(const MyArray& o) : size(o.size), arr(new int[size]) {
        for (int i = 0; i < size; ++i) arr[i] = o.arr[i];
    }

    ~MyArray() { delete[] arr; }

    int& operator[](int i) { return arr[i]; }

    friend std::ostream& operator<<(std::ostream& o, const MyArray& a) {
        for (int i = 0; i < a.size; ++i) o << a.arr[i] << " ";
        return o;
    }

    friend std::istream& operator>>(std::istream& i, MyArray& a) {
        for (int j = 0; j < a.size; ++j) i >> a.arr[j];
        return i;
    }
};

int main() {
    int s;
    std::cout << "Enter size: ";
    std::cin >> s;

    MyArray arr1(s);
    std::cout << "Enter " << s << " elements: ";
    std::cin >> arr1;

    std::cout << "Array 1: " << arr1 << std::endl;

    MyArray arr2 = arr1;
    std::cout << "Array 2 (copied from Array 1): " << arr2 << std::endl;

    std::cout << "Element at index 2 in Array 1: " << arr1[2] << std::endl;

    return 0;
}
// #include <iostream>
// using namespace std;

// class array
// {
// private:
//     int *arr;
//     int size;

// public:
//     array(){};
//     array(int s)
//     {
//         size = s;
//         arr = new int[size];
//     }
//     array(const array &a)
//     {
//         size = a.size;
//         arr = new int[size];
//         for (int i = 0; i < size; ++i)
//         {
//             arr[i] = a.arr[i];
//         }
//     }
//     ~array()
//     {
//         delete[] arr;
//     }
//     int &operator[](int index)
//     {
//         return arr[index];
//     }
// };

// int main()
// {
//     int size = 5;
//     array arr(size);

//     cout << "Enter " << size << " elements for array: ";
//     cin >> arr;
//     return 0;
// }