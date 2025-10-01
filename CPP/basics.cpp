#include<bits/stdc++.h>//it includes all standard libraries
using namespace std;
int must(int &a){
    //remember if u dont put a return statement it will alwyas return a garbage one!
    a+=1;
    return 0;
}
int main(){
    int i;
    for(int i=0;i<10;i++){
        cout<<i;
    }
    cout<<i;//this will give garbage value as the scope of i in for loop is only within the loop
    int a=5;
    cout<<a <<"in function of main before calling must";
    must(a);
    cout<<a;
    //remember when u pass an array to a function it is always passed by reference!
}