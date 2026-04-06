// Last updated: 4/6/2026, 6:12:06 PM
1int countGoodSubstrings(char* s) {
2    int n = strlen(s);
3    int c = 0;
4    for(int i = 0; i <= n - 3; i++){
5        if(s[i]!=s[i+1] && s[i+1]!= s[i+2] && s[i] != s[i+2]){
6            c++;
7        }
8    }
9    return c;
10}