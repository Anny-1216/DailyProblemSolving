#include <stdio.h>
#include <stdlib.h>
int countHillValley(int *nums, int numsSize)
{
    int count =0;
    int i,j,k;
    int c=1;
    i=1;
    while(c<numsSize-1){
        c++;
        
       
        if(i>numsSize-1){
             break;
        }
        
        if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
            printf("%d i am hill",nums[i]);
            count++;
            i++;}
        else if(nums[i]<nums[i-1]&&nums[i]<nums[i+1]){
            printf("%d i am valley",nums[i]);
            count++;
            i++;}
        else if(nums[i]==nums[i+1]&&nums[i]!=nums[i-1])
        {
            i++;
        }

        else{
            i++;
        }
    }
    return count;
}



int main()
{
    int nums[] = {2,4,1,1,6,5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = countHillValley(nums, size);
    printf("Number of hill and valley points: %d\n", result);
    return 0;
}