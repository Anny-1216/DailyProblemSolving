#include <bits/stdc++.h>
using namespace std;

/*
1.Outerloop =no of lines
2.Inner loop no of rows
3.print in inner loop
4.find symmetry
*/
void pattern1(int a){
for(int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            cout<<'*';
        }
        cout<<endl;}
};

void pattern2(int a){
for (int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
        cout<<'*';
    }
    cout<<endl;
}
};

void pattern3(int a){
for (int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
        cout<<j+1;
    }
    cout<<endl;
}};

void pattern4(int a){
for (int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
        cout<<i;
    }
    cout<<endl;
} 
    
};
void pattern5(int a){
for (int i=0;i<a;i++){
    for(int j=a;j>i;j--){
        cout<<'*';
    }
    cout<<endl;
} };

void pattern6(int a){
for (int i=0;i<a;i++){
    for(int j=a;j>i;j--){
        cout<<j;
    }
    cout<<endl;
} };


void pattern7(int a){
for (int i=0;i<a;i++){
    for(int j=1;j<=a-i;j++){
        cout<<j;
    }
    cout<<endl;
} };
// void pattern6(int a){
//     pass
    
// };
void pattern8(int a){
for (int i=0;i<a;i++){
    //space
    for (int j=0;j<a-i-1;j++){
        cout<<' ';
    }
    //star
    for (int j=0;j<i*2+1;j++){
        cout<<'*';
    }
    //space
    for (int j=0;j<a-i-1;j++){
        cout<<' ';
    }
    cout<<endl;
}
};

void pattern9(int a){
for (int i=0;i<a;i++){
    //space
    for (int j=0;j<i;j++){
        cout<<' ';
    }
    //star
    for (int j=0;j<(a*2-1)-(i*2);j++){
        cout<<'*';
    }
    //space
    for (int j=0;j<i;j++){
        cout<<' ';
    }
    cout<<endl;
}
};

void pattern10(int a){
    pattern8(a);
    pattern9(a);
};
int main(){
    int a=0;
    cin>>a;
    // pattern1(a);
    // pattern2(a);
    // pattern3(a);
    //pattern7(a);
    // pattern8(a);
    pattern10(a);
}
