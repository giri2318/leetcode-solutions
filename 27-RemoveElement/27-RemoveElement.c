// Last updated: 3/25/2026, 6:21:50 PM
1int divide(int dividend, int divisor) {
2    
3   if (dividend == INT_MIN && divisor == -1) return INT_MAX;
4    return dividend/divisor;   
5}