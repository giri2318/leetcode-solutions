// Last updated: 2/23/2026, 5:42:57 PM
int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int a = 1, b = 2, love = 0;
        for(int i = 3; i <= n; i++){
            love = a+b;
            a = b;
            b = love;
        }
    return b;
}