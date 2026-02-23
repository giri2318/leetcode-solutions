// Last updated: 2/23/2026, 5:42:47 PM
bool isPowerOfFour(int n) {
    if(n <= 0){
        return false;
    }
    while(n%4==0){
        n/=4;
    }
    return n == 1;
}