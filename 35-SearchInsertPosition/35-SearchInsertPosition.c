// Last updated: 4/6/2026, 6:30:37 PM
int searchInsert(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= target)
            return i;
    }
    return numsSize; 
}