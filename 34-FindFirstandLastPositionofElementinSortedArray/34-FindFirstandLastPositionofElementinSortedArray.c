// Last updated: 3/25/2026, 6:37:02 PM
1int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
2    *returnSize = 2;
3    int *result = malloc(2 * sizeof(int));
4
5    result[0] = -1;
6    result[1] = -1;
7
8    for (int i = 0; i < numsSize; i++) {
9        if (nums[i] == target) 
10        {
11            if (result[0] == -1)
12            {
13                result[0] = i;   
14            }
15            result[1] = i;      
16        }
17    }
18    return result;
19}