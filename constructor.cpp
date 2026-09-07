#include <iostream>
using namespace std;

class Example {
private:
    int value;

public:
    // 1. Default Constructor
    Example() {
        value = 0;
        cout << "Default Constructor called! Value: " << value << endl;
    }

    // 2. Parameterized Constructor
    Example(int v) {
        value = v;
        cout << "Parameterized Constructor called! Value: " << value << endl;
    }

    // 3. Copy Constructor
    Example(const Example &obj) {
        value = obj.value;
        cout << "Copy Constructor called! Value: " << value << endl;
    }

    void display() const {
        cout << "Current Object Value: " << value << endl;
    }
};

int main() {
    cout << "--- Creating obj1 ---" << endl;
    Example obj1; // Calls Default

    cout << "\n--- Creating obj2 ---" << endl;
    Example obj2(100); // Calls Parameterized

    cout << "\n--- Creating obj3 ---" << endl;
    Example obj3 = obj2; // Calls Copy

    return 0;
}
