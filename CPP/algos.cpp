#include<bits/stdc++.h>
using namespace std;
//my fav
void bubblesort(int n,int arr[]){
    int num=n;
    while (num-1>0)
    {
        int didswap=0;
        for (int i = 0; i <n; i++)
    {
        if (arr[i+1]<arr[i])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            didswap=1;
        }
        
        
    }
    if (didswap==0)
    {
        break;
    }
    num--;
    }
}
//alwas find min form i=o to i++ range
void selectionsort(int n,int arr[]){
    for (int i = 0; i < n; i++)
    {
        int min=arr[i];
        for (int j = i; j < n; j++)
        {
            if (min>arr[j])
        {
            int temp=arr[j];
            arr[j]=min;
            min=temp;
        }
        }
        arr[i]=min;
        
    }
    
}

void insertionsort(int n,int arr[]){
    for (int i = 0; i < n; i++)
    {

        int key = arr[i];
        while(i>0 && arr[i]<arr[i-1]){
            int temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
            i--;
        }
        arr[i]=key;
}}
int main(){
    cout<<"Enter size of array : ";
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        arr[i]=num;
    }
    insertionsort(n,arr);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i];
    }
    
    
    return 0;
}