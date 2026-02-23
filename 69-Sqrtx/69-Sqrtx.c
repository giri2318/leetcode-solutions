// Last updated: 2/23/2026, 5:42:58 PM
int mySqrt(int x) {
    for(int i = 0; i <= x ; i++){
        if((long long)i*i==x){
            return i;
        }
        else if((long long)i*i > x){
            return i-1;
        }
    }
    return 0;
}