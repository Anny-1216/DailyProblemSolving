#include<bits/stdc++.h>
using namespace std;

int main(){
    //pairs/dictionary like
    //remember pair is a data type that holds two values so you can use it to any other datastructure

    pair<int,string> a;

    cin >> a.first ;
    cin >> a.second;
    cout << "Your Id Password is saved" << endl;
    cout << "Id: " << a.first << " Password: " << a.second << endl;

    //Vectors is another datatstructure its like list in python but with numpy features such as getting an array but with fixed num and values u give it.

    vector<int> v;

    //inserting into vector
    v.push_back(5);
    v.emplace_back(10); //faster than push_back

    
    

    vector<int>v1 (5); //vector of 5 elements
    vector<int>v2 (5,100); //vector of 5 elements with each value 100

    //iterators to acess the elements of vector
    vector<int> :: iterator it = v.begin(); //iterator is a pointer that points to the first element of vector
    cout << *it << endl; //dereferencing the iterator to get the value
    it++;
    cout << *it << endl;

    stack<int>;
    queue<int>;
    set<int>;
    map<int,int>;
    multimap<int,int>;
    multiset<int>;
    unordered_map<int,int>;
    unordered_set<int>;
    unordered_multimap<int,int>;
    unordered_multiset<int>;
    priority_queue<int>; //max heap
    priority_queue<int, vector<int>, greater<int>>; //min heap
    deque<int>; //double ended queue
    list<int>; //doubly linked list
    forward_list<int>; //singly linked list
    bitset<8> b; //8 bits
    b[1] = 1;
    cout << b << endl; //prints 00000010
    string s = "hello";
    cout << s << endl; //prints hello
    return 0;
}