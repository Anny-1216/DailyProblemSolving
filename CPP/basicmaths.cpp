#include<bits/stdc++.h>
using namespace std;


int countdigit(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

int revnum(int n){
    int rev=0;

    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        rev=(rev*10)+lastdigit;
    }
    return rev;
}

bool ispalindrome(int n){
    int m=n;
    if(m==revnum(n))return true;
    else return false;
}

bool isarmstrongnum(int n){
    int sum=0;
    int cpy=n;
    while (n>0)
    {
        int num=n%10;
        sum=sum+(num*num*num);
        num=num/10;
    }
    
    if (cpy==sum) return true;
    else return false;
}

int divisors(int n){
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){cout<<i<<" ";if (n%i!=i)cout<<" "<<n/i;}
        count++;
    }
    return count;
}

bool isprime(int n){
    if (divisors(n)>2)return false;
    else return true;
}

int gcd(int n1,int n2){
    while(n1>0 && n2>0){
    if (n1>n2){
        n1=n1%n2;}
    else{n2=n2%n1;}}
    if (n1==0)return n2;
    else return n1;
}
int main(){
    int n;
    int n1,n2;
    cin>>n1;
    cin>>n2;
    cin>>n;
    cout << countdigit(n) << endl;
cout << divisors(n) << endl;
cout << ispalindrome(n) << endl;
cout << isarmstrongnum(n) << endl;
cout << isprime(n) << endl;
cout << gcd(n1,n2) << endl;
}