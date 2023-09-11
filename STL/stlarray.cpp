#include<iostream>
#include<array>

using namespace std;

int main() {
    int basic[4] = {1, 2, 3, 4}; // Specify the correct size of the array
    array<int, 4> a = {2, 3, 4, 5}; // This is fine since the size matches the number of initial values

    int size = a.size();

    for(int i = 0; i < size; i++) {
    cout << a[i] << endl; //2  3 4 5 
         
    cout << "Element at 2nd index ->" << a.at(2) << endl; //Element at 2nd index ->4
    cout << "Empty or not ->" << a.empty() << endl; //Empty or not ->0
    cout<<"first element ->"<<a.front()<<endl; //first element ->2
    cout<<"last element ->"<<a.back()<<endl; //last element ->5


    }
    

    return 0; // You should include a return statement at the end of main
}
