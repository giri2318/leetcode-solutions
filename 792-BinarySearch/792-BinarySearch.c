// Last updated: 2/23/2026, 5:42:40 PM
int search(int* nums, int numsSize, int target) {
    int f = 0;
    int l = numsSize-1;
    while(f<=l){
        int mid = f+((l-f)/2);
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid] < target){
            f = mid+1;
        }
        else{
            l = mid-1;
        }
    }
    return -1;
}