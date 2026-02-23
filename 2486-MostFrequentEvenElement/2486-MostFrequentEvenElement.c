// Last updated: 2/23/2026, 5:42:31 PM
int mostFrequentEven(int* nums, int numsSize) {
    int fre[100001]={0};
    int max = 0;
    int flag = -1;
    for(int i = 0; i < numsSize; i++){
        int c = 0;
        if(nums[i]%2==0){
            fre[nums[i]]++;
        }
        if(max < fre[nums[i]]||((fre[nums[i]] == max )&& (nums[i] < flag)))
        {
            max = fre[nums[i]];
            flag = nums[i];
        }
    }
   return flag;
}