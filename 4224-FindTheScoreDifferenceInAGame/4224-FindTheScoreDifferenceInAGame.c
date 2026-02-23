// Last updated: 2/23/2026, 5:42:30 PM
int scoreDifference(int* nums, int numsSize) {
    int sc1 = 0, sc2 = 0;
    int ac = 0; 

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 1) {
            ac = 1 - ac;
        }
        if (i % 6 == 5) {
            ac = 1 - ac;
        }

        if (ac == 0) {
            sc1 += nums[i];
        } else {
            sc2 += nums[i];
        }
    }

    return sc1 - sc2;
}
