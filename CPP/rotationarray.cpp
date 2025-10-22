#include<bits/stdc++.h>
using namespace std;
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

int binarySearchIterative(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;       // Found, return index
        else if (arr[mid] < target)
            low = mid + 1;    // Search right half
        else
            high = mid - 1;   // Search left half
    }

    return -1;  // Not found
}

int position_rotate(int arr[],int n){
    int unsorted[n];
    for(int i=0;i<n;i++){
        unsorted[i]=arr[i];
    }
    quicksort(arr,0,n);
    int min=arr[0];
    int pos=binarySearchIterative(unsorted,n,min);

}
int main (void){
    return 0;
}