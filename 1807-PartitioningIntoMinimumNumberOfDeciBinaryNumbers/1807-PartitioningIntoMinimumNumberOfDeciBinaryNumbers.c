// Last updated: 3/24/2026, 8:38:18 PM
int minPartitions(char* n) {
    int x = strlen(n);
    int i = 1;
    int max = n[0]-'0';
    while(x){
        int rem = n[i]-'0';
        if(max < rem){
            max = rem;
        }
        i++;
        x--;
    }
    return max;
}