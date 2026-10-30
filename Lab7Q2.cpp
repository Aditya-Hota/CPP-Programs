#include <iostream>
#include <string>
using namespace std;

class Sentence {
    string str;

public:
    void input() {
        cout << "Enter a sentence: ";
        getline(cin, str);
    }

    void reverse(int index) {
        if (index < 0)
            return;

        cout << str[index];
        reverse(index - 1);
    }

    void display() {
        cout << "Reversed sentence: ";
        reverse(static_cast<int>(str.length()) - 1);
        cout << endl;
    }
};

int main() {
    Sentence s;
    s.input();
    s.display();

    return 0;
}