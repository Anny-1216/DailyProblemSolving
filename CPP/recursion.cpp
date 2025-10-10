#include<bits/stdc++.h>
using namespace std;
void f (int n){
    if(n>0){cout<<n;
    return(f(n-1));}
}
void f2(int n){
    if (n==1)
    {
        cout<<n;
    }
    else{f2(n-1);cout<<n;}
    
}
int f3(int n){
    if (n==1)
    {
        return n;
    }
    else{return n+f3(n-1);}
    
}
int f4(int n){
    if (n==1)
    {
        return n;
    }
    else{return n*f4(n-1);}
    
}
int f5(int n){
    if (n==1 or n==0)
    {
        return n;
    }
    else{return f5(n-1)+f5(n-2);}
    
}

void f6(int n,int arr[],int i){
    
if (n==i)return;
else
{
    swap(arr[i],arr[n]);
    f6(n-1,arr,i+1);
}

}

bool f7(int n, string a, int i) {
    if (i >= n) return true;        // Safe for both even and odd lengths
    if (a[i] != a[n]) return false; // Mismatch -> not palindrome
    return f7(n - 1, a, i + 1);     // Recurse inward
}

int main(){int n; cin>>n;//cout<<f5(n);
    string a;
    cin>>a;
    cout<<f7(a.length()-1,a,0);
    }