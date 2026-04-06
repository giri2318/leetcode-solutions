// Last updated: 4/6/2026, 6:30:38 PM
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *result = malloc(2 * sizeof(int));

    result[0] = -1;
    result[1] = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) 
        {
            if (result[0] == -1)
            {
                result[0] = i;   
            }
            result[1] = i;      
        }
    }
    return result;
}