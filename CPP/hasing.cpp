#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,1,3,4,12,12,12,4,5};
    int hash[13]={0};
    for (int i = 0; i < 10; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < 13; i++)
    {
        cout<<i<<"->"<<hash[i]<<endl;
    }
    

    string name;
    cin>>name;
    int charhash[27]={0};
    for (int i=0;i<name.size();i++){
        charhash[name[i]-'a']++;
    }
    for (int i = 0; i < 27; i++)
    {
        cout<<i<<"->"<<charhash[i]<<endl;
    }

    map<char,int>m;
    for (int i = 0; i < name.size(); i++)
    {
        m[i,name[i]]++;
    }

    for (auto it : m)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    
    map<int,int>m2;
    for (int i = 0; i < 13; i++)
    {
        m2[arr[i]]++;
    }
    for (auto it : m2)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
   
}
    