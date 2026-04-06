// Last updated: 4/6/2026, 6:29:53 PM
1int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
2    int sum = 0, c = 0;
3    for(int i = 0; i < k; i++){
4        sum+=arr[i];
5    }
6    if(sum/k >= threshold) c++;
7    for(int i = k; i < arrSize; i++){
8        sum+=arr[i];
9        sum-=arr[i-k];
10        if(sum/k >= threshold) c++;
11    }
12    return c;
13}