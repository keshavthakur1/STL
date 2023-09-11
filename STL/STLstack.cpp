#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    // 1. Push elements onto the stack
    s.push(1);
    s.push(2);
    s.push(3);

    // 2. Pop elements from the stack
    while (!s.empty()) {
        int top_element = s.top(); // Get the top element
        s.pop();                   // Pop the top element
        cout << "Popped: " << top_element << endl;
    }

    // 3. Checking if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty." << endl;
    }

    // You can push more elements and perform the same operations again

    return 0;
}
