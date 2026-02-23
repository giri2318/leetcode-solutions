// Last updated: 2/23/2026, 5:42:54 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *res = (int*)calloc(2,sizeof(int));
    *returnSize = 2;
    int l = 0, r = numbersSize-1;
    while(l < r){
        int sum = numbers[l]+numbers[r];
        if(sum==target){
            res[0]=l+1;
            res[1]=r+1;
            return res;
        }
        else if(sum < target){
        l++;
        }
        else{
        r--;
        }
    } 
    return res;
}