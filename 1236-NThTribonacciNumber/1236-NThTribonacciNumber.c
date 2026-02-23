// Last updated: 2/23/2026, 5:42:38 PM
int tribonacci(int n) {
     long long int  f = 0, m = 1, l = 1,sum = 0;
        while(n--){
            sum = f+m+l;
            f=m;
            m=l;
            l=sum;
        }
        return f;
}