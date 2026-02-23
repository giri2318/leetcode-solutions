// Last updated: 2/23/2026, 5:42:52 PM
bool isHappy(int n) {
    int c = 0;
    while(c < 20){
     int sum = 0;
        while(n){
            int rem = n%10;
            sum+=rem*rem;
            n/=10;
        }
        n = sum;
        c++;
        if(n == 1){
           return true;
        }
    }
    return false;
}