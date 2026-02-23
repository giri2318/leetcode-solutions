// Last updated: 2/23/2026, 5:42:39 PM

int fib(int n){
    long long int sum = 0,l=1,f=0;
    while(n--){
        sum = f+l;
        f=l;
        l=sum;
    }
    return f;
}