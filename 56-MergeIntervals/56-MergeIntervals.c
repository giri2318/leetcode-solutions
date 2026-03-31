// Last updated: 3/31/2026, 6:42:37 PM
1int compare(const void* a, const void* b) {
2    return *(int*)a - *(int*)b;
3}
4
5bool containsDuplicate(int* nums, int numsSize) {
6
7    qsort(nums, numsSize, sizeof(int), compare);
8    for(int i = 0; i < numsSize - 1; i++){
9        if(nums[i] == nums[i+1]) return true;
10    }
11    return false;
12}
13
14