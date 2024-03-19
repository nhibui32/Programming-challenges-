/*03/18/2024
Chapter 9: Pointers
Array Allocator: Write a function that dynamically allocates an array of integers. The function should accept an integer argument indicating the number of elements to allocate. The function return a pointer to the array. */
#include <iostream>
using namespace std;
int* ptr(int size)
{
    if (size <= 0)
    {
        cout <<"Invalid array size." << endl;
        return nullptr;
    }
    int* array = new int[size];
    return array;
}
int main()
{
    int SIZE;
    cout << "Enter the size of the array: ";
    cin >> SIZE;
    int* array = ptr(SIZE);
    if (array != nullptr)
    {
    cout << "A pointer to the array is: ";
    cout << ptr(SIZE);
    }
    delete[] array;
    return 0; 
}