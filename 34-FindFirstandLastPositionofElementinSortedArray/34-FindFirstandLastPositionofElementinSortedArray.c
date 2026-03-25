// Last updated: 3/25/2026, 6:46:47 PM
1int searchInsert(int* nums, int numsSize, int target) {
2    for (int i = 0; i < numsSize; i++) {
3        if (nums[i] >= target)
4            return i;
5    }
6    return numsSize; 
7}