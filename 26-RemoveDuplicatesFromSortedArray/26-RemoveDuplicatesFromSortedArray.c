// Last updated: 2/23/2026, 5:42:59 PM
int removeDuplicates(int* nums, int numsSize) {
    int j = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j]=nums[i];
        }
    }
    return j+1;
}