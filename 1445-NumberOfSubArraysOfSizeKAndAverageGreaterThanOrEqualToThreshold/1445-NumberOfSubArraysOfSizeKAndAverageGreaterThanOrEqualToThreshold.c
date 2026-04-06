// Last updated: 4/6/2026, 6:30:18 PM
int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int sum = 0, c = 0;
    for(int i = 0; i < k; i++){
        sum+=arr[i];
    }
    if(sum/k >= threshold) c++;
    for(int i = k; i < arrSize; i++){
        sum+=arr[i];
        sum-=arr[i-k];
        if(sum/k >= threshold) c++;
    }
    return c;
}