// Last updated: 2/23/2026, 5:42:42 PM
bool hasAlternatingBits(int n) {
   int bi[32];
    int i = 0;

    while (n > 0) {
        bi[i++] = n % 2;
        n /= 2;
    }

    int pre = bi[i - 1];

    for (int j = i - 2; j >= 0; j--)
     {
        if (bi[j] == pre)
        {
            return false; 
        }
        pre = bi[j];
    }
    return true;
}