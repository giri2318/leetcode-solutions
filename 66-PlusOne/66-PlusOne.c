// Last updated: 4/16/2026, 6:59:28 PM
1/**
2 * Note: The returned array must be malloced, assume caller calls free().
3 */
4int* plusOne(int* digits, int digitsSize, int* returnSize) {
5
6    for (int i = digitsSize - 1; i >= 0; i--) {
7        if (digits[i] < 9) {
8            digits[i]++;
9            *returnSize = digitsSize;
10            return digits;
11        }
12        digits[i] = 0; 
13    }
14    int* result = (int*)calloc(digitsSize + 1, sizeof(int));
15    result[0] = 1;
16    *returnSize = digitsSize + 1;
17    return result;
18}