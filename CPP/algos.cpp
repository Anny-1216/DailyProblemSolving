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
void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergesort(int arr[], int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int f(int arr[],int low,int high){
    int pivot =arr[low];
    int i=low;
    int j=high;
    while (j>i)
    {
        while(arr[i]<=pivot && i<=high){i++;}
        while(arr[j]>pivot && j>=low){j--;}
        if(i<j){swap(arr[i],arr[j]);}
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high){
    if (low<high)
    {
        int midterm = f(arr,low,high);
        quicksort(arr,low,midterm-1);
        quicksort(arr,midterm+1,high);
    }
    else
    {
        return;
    }
    
    
}
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