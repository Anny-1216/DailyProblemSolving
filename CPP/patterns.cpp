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

void pattern11(int a){
    pattern2(a);
    pattern5(a-1);
}

void pattern12(int a){
    for (int i=0;i<a;i++){
        for (int j=0;j<=i;j++){
            if (i%2==0){
                if(j%2==0)cout<<1;
                else cout<<0;
            }
            else{
                if(j%2==0)cout<<0;
                else cout<<1;
            }
        }
        cout<<endl;
    }
}

void pattern13(int a){
for (int i=0;i<a;i++){
    //space
    for (int j=0;j<=i;j++){
        cout<<j+1;
    }
    //star
    for (int j=0;j<(2*a-2)-(2*i);j++){
        cout<<' ';
    }
    //space
    for (int j=i;j>=0;j--){
        cout<<j+1;
    }
    cout<<endl;
}
};

void pattern14(int a){
    int k=1;
for (int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
        cout<<k++;
    }
    cout<<endl;
}
};

void pattern15(int a){
    
for (int i=0;i<a;i++){
    for(char j='A';j<='A'+i;j++){
        cout<<j;
    }
    cout<<endl;
}
};

void pattern16(int a){ 
for (int i=a;i>0;i--){
    for(char j='A';j<='A'+i-1;j++){
        cout<<j;
    }
    cout<<endl;
}
};
void pattern17(int a){
    
for (int i=0;i<a;i++){
    //space
    for (int j=0;j<a-i-1;j++){
        cout<<' ';
    }
    //star
    char ch = 'A';
    int breakpoint=(2*i+1)/2;
    for (int j=0;j<i*2+1;j++){
        cout<<ch;
        if (j<=breakpoint){
            
            ch++;
        }
        else{
            ch--;
    }
    }
    cout<<endl;

};
}

void pattern18(int a){
    
for (int i=0;i<a;i++){
    for (char j='E'-i;j<='E';j++)
    cout<<j<<" ";
    cout<<endl;
}
};

void pattern19(int a){
for(int i=0;i<a;i++){
    for(int j=5-i;j>0;j--){
        cout<<'*';
    }
    for (int j=0;j<2*i;j++)cout<<' ';
    for(int j=5-i;j>0;j--){
        cout<<'*';
    
    }
    cout<<endl;
}

pattern13(a);
}
void pattern20(int a){
    for (int i=0;i<2*a-1;i++){
        for(int j=0;j<2*a-1;j++){
            int top=i;
            int left=j;
            int right=(2*a-2)-j;
            int bottom=(2*a-2)-i;
            cout<<a-min(min(top,bottom),min(left,right));
           
            }
            cout<<endl;
        }
        
    }

void pattern21(int n){
    int count=0;
    for(int i =0;i<n;i++){
            if(i%2==0){
                count=count+2;
                for(int k=0;k<count;k++){cout<<'*';
                }
            }
            else{
                for(int j=0;j<count;j++){cout<<'*';}
            }
            cout<<endl;
        }
    }
void pattern22(int n){
    int space=0;
    int space2=n-2;
    for(int i=1;i<=n;i++){
        
        if(i<=(n/2)){
        for (int j = 0; j <(n-space)/2 ; j++)
        {
            cout<<"*";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for (int j = 0; j <(n-space)/2 ; j++)
        {
            cout<<"*";
        }
        space=space+2;}
        
        else{
        
        for (int j = 0; j <(n-space2)/2 ; j++)
        {
            cout<<"*";
        }
        for(int j=0;j<space2;j++){
            cout<<" ";
        }
        for (int j = 0; j <(n-space2)/2 ; j++)
        {
            cout<<"*";
        }
        space2=space2-2;
        
    }
    cout<<endl;
    }
}

int main(){
    int a=0;
    cin>>a;
    // pattern1(a);
    // pattern2(a);
    // pattern3(a);
    //pattern7(a);
    // pattern8(a);
    //pattern10(a);
    //respect part 2 loop space pattern13(a);
    // respect part3 pattern15(a);
    //pattern16(a);
    pattern22(a);
}
