#include <iostream>
using namespace std;

class ArrayHandler {
private:
    int* arr;
    int size;

public:
    // Constructor initializes size and dynamically allocates the array
    ArrayHandler(int s) {
        size = s;
        arr = new int[size];
        cout << "Enter " << size << " array elements: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Destructor to free memory
    ~ArrayHandler() {
        delete[] arr;
    }

    // Declare the friend function
    friend int calculateSum(const ArrayHandler *objPtr);
};

// Friend function implementation using an object pointer
int calculateSum(const ArrayHandler *objPtr) {
    int sum = 0;
    // Accesses private members through the pointer parameter
    for (int i = 0; i < objPtr->size; i++) {
        sum += objPtr->arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    // Create object and a pointer pointing to it
    ArrayHandler obj(n);
    ArrayHandler *ptr = &obj;

    // Pass the object pointer to the friend function
    int totalSum = calculateSum(ptr);

    cout << "The sum of all elements in the array is: " << totalSum << endl;

    return 0;
}
