// Last updated: 3/25/2026, 6:14:18 PM
1int removeElement(int* nums, int numsSize, int val) {
2    int c = 0;
3    for(int i = 0; i < numsSize; i++){
4        if(nums[i] != val){
5            nums[c] = nums[i];
6             c++;
7        }
8}
9return c;
10}