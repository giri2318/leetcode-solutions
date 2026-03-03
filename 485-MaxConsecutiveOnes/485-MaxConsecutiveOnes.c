// Last updated: 3/3/2026, 1:48:57 PM
1int findMaxConsecutiveOnes(int* nums, int numsSize) {
2    int max = 0;
3    int c = 0;
4    for(int i = 0; i < numsSize; i++){
5        if(nums[i]!=0){
6            c++;
7        }
8        else{
9            c = 0;
10        }
11        if(max < c){
12            max = c;
13        }
14    }
15    return max;
16}