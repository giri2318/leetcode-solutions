// Last updated: 2/23/2026, 5:42:50 PM
int addDigits(int num) {
    int x = num;
    while(x){
        int sum = 0;
        while(num){
            int rem = num%10;
            sum+=rem;
            num/=10;
        }
        num = sum;
        if(num < 10){
            break;
        }
    }
    return num;
}