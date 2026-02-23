// Last updated: 2/23/2026, 5:42:48 PM
bool isPowerOfThree(int n) {
    if(n <= 0){
        return false;
    }
    while(n%3==0){
        n/=3;
    }
    return n == 1;
}