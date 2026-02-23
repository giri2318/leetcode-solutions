// Last updated: 2/23/2026, 5:43:00 PM
bool isPalindrome(int x) {
    int org = x;
    int rev = 0;

    if(x < 0)
        return false;

    while(x > 0){
        int dig = x%10;
        
        if(rev > INT_MAX/10)
            return false;

       rev = rev*10+dig;
       x/=10;
    }
    return org == rev;
}