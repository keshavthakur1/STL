#include<vector>
#include<iostream>
#include<array>
using namespace std;


int main(){

vector<int>v;   //capacity ->0
cout<<"capacity ->"<< v.capacity()<<endl;


//add element to the vector 
v.push_back(1);
cout<<"capacity ->"<<v.capacity()<<endl;


//ou are adding 2 to the vector and then printing its current capacity. This is useful for understanding how vectors manage memory allocation as you add elements to them.
v.push_back(2);    //capacity ->2
cout<<"capacity ->"<<v.capacity()<<endl;


v.push_back(3);  //capacity ->4   reson is  due to how vectors manage memory and dynamically resize themselves to accommodate new elements efficiently. 
cout<<"capacity ->"<<v.capacity()<<endl;
 /*  BTS(Behind the seen)
Initially, a vector starts with some small capacity, often 1 or 2, to minimize memory usage when it's empty.

When you call push_back(3) and there isn't enough capacity to hold the new element, the vector needs to allocate a larger memory block. This process is called reallocation.

To minimize the overhead of frequent reallocation, vectors often allocate more memory than is needed for the current element being added. In this case, it may allocate enough space for multiple elements. For example, it might double the current capacity. So, if the vector had a capacity of 2 before the push_back(3) call, it would increase the capacity to 4.

Initially: [ ]
After push_back(3):
Allocate memory for 4 elements (even though you're adding only one).
Add 3 to the vector: [3]
This strategy ensures that adding elements to the vector remains efficient because it reduces the number of reallocations. If vectors increased their capacity by just one element at a time, it would lead to frequent reallocations and inefficient memory usage.

Keep in mind that the exact capacity increase strategy might vary depending on the C++ implementation, but it commonly involves doubling the capacity to achieve amortized constant-time push_back operations.
 
 */

cout<<"size ->"<<v.size()<<endl;  //size ->3

cout<<"Element at 2nd Index ->"<< v.at(0)<<endl;  //Element at 2nd Index ->1

cout<<"Front ->"<<v.front()<<endl;  //Front ->1


cout<<"Back ->"<<v.back()<<endl;  //Back ->3

  cout << "Before pop:" << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

v.pop_back();

cout << "After  pop:" << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

        // Check the final size and capacity
    cout << "Final size of vector: " << v.size() << endl;
    cout << "Final capacity of vector: " << v.capacity() << endl;

    return 0;
}


// int main() {
//     // Declare and initialize a vector
//     vector<int> v;

//     // Check the initial capacity
//     cout << "Initial capacity: " << v.capacity() << endl;

//     // Add elements to the vector
//     for (int i = 1; i <= 5; i++) {
//         v.push_back(i);
//     }

//     // Access and print elements
//     cout << "Elements in the vector: ";
//     for (int i : v) {
//         cout << i << " ";
//     }
//     cout << endl;

//     // Check the size and capacity after adding elements
//     cout << "Size of vector: " << v.size() << endl;
//     cout << "Capacity after adding elements: " << v.capacity() << endl;

//     // Access and modify elements
//     v[2] = 10;

//     // Erase an element by index
//     v.erase(v.begin() + 1);

//     // Insert an element at a specific position
//     v.insert(v.begin() + 2, 20);

//     // Check the updated elements
//     cout << "Updated elements: ";
//     for (int i : v) {
//         cout << i << " ";
//     }
//     cout << endl;

//     // Check the final size and capacity
//     cout << "Final size of vector: " << v.size() << endl;
//     cout << "Final capacity of vector: " << v.capacity() << endl;

//     // Clear the vector
//     v.clear();
    
//     // Check the size and capacity after clearing
//     cout << "Size of vector after clearing: " << v.size() << endl;
//     cout << "Capacity of vector after clearing: " << v.capacity() << endl;

//     return 0;
// }

