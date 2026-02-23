// Last updated: 2/23/2026, 5:42:53 PM
int majorityElement(int* nums, int numsSize) {
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}
