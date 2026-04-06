// Last updated: 4/6/2026, 6:30:14 PM
int countGoodSubstrings(char* s) {
    int n = strlen(s);
    int c = 0;
    for(int i = 0; i <= n - 3; i++){
        if(s[i]!=s[i+1] && s[i+1]!= s[i+2] && s[i] != s[i+2]){
            c++;
        }
    }
    return c;
}