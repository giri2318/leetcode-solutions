// Last updated: 2/23/2026, 5:42:35 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
             int* result = (int*)malloc(numsSize*2*sizeof(int));
             *returnSize = numsSize*2;
             for(int i = 0; i < numsSize; i++){
                    result[i] = nums[i];
                    result[numsSize+i] = nums[i];
             }
             return result;
}