// Last updated: 2/23/2026, 5:42:33 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructTransformedArray(int* nums, int numsSize, int* returnSize) {
        int* result = (int*)malloc(numsSize*sizeof(int));
        *returnSize = numsSize;
        for(int i = 0; i < numsSize; i++){
           if(nums[i]==0){
            result[i] = nums[i];
           }
           else{
                int newIndex =  ((i+nums[i]) % numsSize + numsSize)%numsSize;
                result[i]  = nums[newIndex];
           }
        }
        return result;
}