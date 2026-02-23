// Last updated: 2/23/2026, 5:42:36 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
        int* result = (int*)malloc(numsSize*sizeof(int));
        *returnSize = numsSize; 
        for(int i = 0; i < numsSize; i++)
        {
            int c = 0;
            for(int j = 0; j < numsSize; j++){
                if(nums[i] > nums[j]){
                    c++;
                }
                result[i]=c;
            }
        }
        return result;
}