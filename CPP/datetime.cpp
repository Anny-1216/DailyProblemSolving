#include<bits/stdc++.h>
using namespace std;

bool is_leapyear(int n){
    if ((n%4==0)&&(n%100!=0 || n%400==0))
    {
        return true;
    }
    
    return false;
}
int main(){

    int n;
    cout<<"Enter Year to check if leap:";
    cin>>n;
    cout<<is_leapyear(n);
    return 0;
}