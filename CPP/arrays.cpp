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
void rightshift(int arr[],int n,int k){
    int p=n-k;
    reversearray(arr,0,p-1);
    reversearray(arr,p+1,n-1);
    reversearray(arr,0,n-1);
}//8. ZEROS at end brute-. TAKE ANOTHER ARRAY TEMP BETTER->OPTIMAL->
void zero_at_end(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<n){
        if (arr[i]==0)
        {
            
            while(j>=0){
                if ((arr[i]!=arr[j])&& i<j)
                {
                   swap(arr[i],arr[j]);
                   j--;
                   break;
                }
                else{j--;}

                
            }
            i++;
        }
        else{i++;}
        
    }
}

void moveZeroes(int nums[], int n) {
    int zcount=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0)zcount++;
    }
    for(int i=0;i<zcount;i++){
        for(int j=0;j+1<n;j++){
            int k=n;
            if(nums[j]==0){
                while(k!=0){
                    swap(nums[j],nums[j+1]);
                    k--;
                }
            }
        }
    }
}

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){j=i;
        break;}
    }

    if(j==-1)return;
    else{
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }

        
    }
};

//9.Linear Search
int linearsearch(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
    }
//10.Union of 2 sets  Brute-> Use Sets data structure
int main(void)
{

    int arr[] = {0,1};

    moveZeroes(arr, 2);
    for (int i = 0; i < 2; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}