// Last updated: 2/23/2026, 5:42:49 PM
bool isUgly(int n) {
    if (n <= 0) return false;
    
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;
    
    return n == 1;
}