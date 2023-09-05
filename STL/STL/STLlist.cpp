#include<iostream>
using  namespace std;

#include<list>

int main(){

    list<int>l;
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<< i<<""<<endl;

    }  // here  you get the the output is 2,1   the we get 2 is first bcz 2 is push from front and  1 is push from end 

    //erase
    l.erase(l.begin());

    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<""<<endl;

    };
    //cout<<"size of list "<<l.size()<<endl;


        return 0;



    
}