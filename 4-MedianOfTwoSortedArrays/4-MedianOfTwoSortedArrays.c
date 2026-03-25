// Last updated: 3/25/2026, 5:43:00 PM
double findMedianSortedArrays(int* nums1, int n1, int* nums2, int n2) {
    int x = n1+n2; 
    int arr[x];
    for(int i = 0; i < n1; i++){
            arr[i] = nums1[i];
    }
    for(int i = 0; i < n2; i++){
        arr[n1+i] = nums2[i];
    }

    for(int i = 0; i < x;i++){
        for(int j = 0; j < x-1-i; j++){
            if(arr[j] > arr[j+1]){
                int t  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    if(x%2 == 0){
        double y = (arr[(x/2)-1]+arr[x/2])/2.0;
        return y;
    }
    double y = arr[x/2];
    return y;
}