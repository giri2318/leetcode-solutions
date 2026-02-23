// Last updated: 2/23/2026, 5:42:56 PM
int singleNumber(int* nums, int numsSize) {
    int i = 0;
    for(int j = 0; j < numsSize; j++){
        i^=nums[j];
    }
    return i;
}