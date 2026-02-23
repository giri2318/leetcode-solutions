// Last updated: 2/23/2026, 5:42:51 PM
bool isPowerOfTwo(int n) {

    if (n <= 0) 
    return false;
    
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}