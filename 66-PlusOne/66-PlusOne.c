// Last updated: 4/16/2026, 7:00:54 PM
1int missingNumber(int* nums, int numsSize) {
2    int xor_all = 0;
3    int xor_nums = 0;
4    
5    for (int i = 0; i <= numsSize; i++) {
6        xor_all ^= i;
7    }
8    
9    for (int i = 0; i < numsSize; i++) {
10        xor_nums ^= nums[i];
11    }
12    
13    return xor_all ^ xor_nums;
14}