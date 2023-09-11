#include <iostream>
#include <deque>  // Include the deque header
using namespace std;

int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);  // Add a semicolon here to fix the syntax error

    for (int i : d) {
        cout << i << " ";
    }

    d.pop_back();  // You can uncomment this line if you want to test popping an element
    cout << endl;
    for (int i : d) {
        cout << i << " ";
    }

    cout << "print First Index element -> " << d.at(1) << endl;
    cout << "front -> " << d.front() << endl;  // Added parentheses here
    cout << "back -> " << d.back() << endl;    // Added parentheses here

    return 0;
}
