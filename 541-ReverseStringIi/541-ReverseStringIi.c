// Last updated: 2/23/2026, 5:42:43 PM
void revStr(int l, int r, char* s){
    while(l < r){
        int temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
}
char* reverseStr(char* s, int k) {
    int n = strlen(s);
    for(int i = 0; i < n; i+=2*k){
        int l = i;
        int r = (i+k-1<n) ? (i+k-1) : (n-1);
        revStr(l,r,s);
    }     
    return s;
}