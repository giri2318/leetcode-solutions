// Last updated: 3/25/2026, 5:41:11 PM
1double findMedianSortedArrays(int* nums1, int n1, int* nums2, int n2) {
2    int x = n1+n2; 
3    int arr[x];
4    for(int i = 0; i < n1; i++){
5            arr[i] = nums1[i];
6    }
7    for(int i = 0; i < n2; i++){
8        arr[n1+i] = nums2[i];
9    }
10
11    for(int i = 0; i < x;i++){
12        for(int j = 0; j < x-1-i; j++){
13            if(arr[j] > arr[j+1]){
14                int t  = arr[j];
15                arr[j] = arr[j+1];
16                arr[j+1] = t;
17            }
18        }
19    }
20    if(x%2 == 0){
21        double y = (arr[(x/2)-1]+arr[x/2])/2.0;
22        return y;
23    }
24    double y = arr[x/2];
25    return y;
26}