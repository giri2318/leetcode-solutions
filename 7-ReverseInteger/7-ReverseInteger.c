// Last updated: 3/25/2026, 5:53:30 PM
1int reverse(int x){
2    long rev = 0;
3    while(x){
4        int rem = x%10;
5        rev = rem + rev*10;
6        x/=10;
7    }
8      if (rev > INT_MAX || rev < INT_MIN) return 0;
9    return (int)rev;
10}