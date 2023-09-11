#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> q;

    // Push elements onto the queue
    q.push("Love");
    q.push("babbar");
    q.push("thakur");

    // Display the first and last elements
    std::cout << "First element: " << q.front() << std::endl;
    std::cout << "Last element: " << q.back() << std::endl;

    // Display the size of the queue
    std::cout << "Queue size before pop: " << q.size() << std::endl;

    // Pop the first element
    q.pop();

    // Display the first element after pop
    std::cout << "First element after pop: " << q.front() << std::endl;

    // Check if the queue is empty
    if (q.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    return 0;
}
// time complexity o(1)
