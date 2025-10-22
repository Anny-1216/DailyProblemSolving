#include <bits/stdc++.h>
using namespace std;

// 1.Finding largest number in the array a.sort array return last element b.swap every element greater than max until u found none (optimal)
int largestnum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// 2.Finding second largest number in array a.sort and return -2th index b.
int seclargestnum(int arr[], int n)
{
    int max = -1;
    int max2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (n == 3)
        {
            if (arr[i] > max)
        {
            max2=max;
            max = arr[i];
        }
        else if(arr[i]>max2){max2=arr[i];}
           
        }
        else
        {
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (i >= 2)
        {
            if (arr[i - 1] < max && arr[i - 1] > max2)
                max2 = arr[i - 1];
        }
    }
    cout << max;
    cout << max2;
    return max2;
}
//3.Check if array is sorted
bool checksort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>=arr[i-11])
        {
            return true;
        }
    }
    
    return false;
    
}

//4.Remove duplicates from a sorted array linear approach use of set, optimal two ptrs
void removeduplicate(int arr[],int n){
    int i=0;
    int j=0;
    int count=1;
    while (j<n)
    {
        if(arr[i]==arr[j]){
    
        
        j++;
        
    }
        else{
            
        arr[i+1]=arr[j];
         i++;
         
        count++;}
    }
    cout<<count;
}
//5.Left rotate array by one
void leftrotatearrayby1(int arr[],int n,int rotate){
    int pos = n-rotate;
    int temp=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(i==pos){arr[pos]=temp;}
        else{
        arr[i]=arr[i+rotate];}
    }
    
}
//6.left rotate by k brute is taking an extra array, optimal is reverse,reverse,reverse!

void reversearray(int arr[],int start ,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotatearray(int arr[],int n,int k){
    if(k%n==0)return;
    reversearray(arr,0,k-1);
    reversearray(arr,k+1,n-1);
    reversearray(arr,0,n-1);
}

//7.Right Shift
int main(void)
{

    int arr[] = {1,1,1,2,2,2,3};

    rotatearray(arr, 7,3);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}