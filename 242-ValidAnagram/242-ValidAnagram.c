// Last updated: 2/24/2026, 12:23:49 PM
1int firstUniqChar(char* s) {
2    int n = strlen(s);
3    int c[26] = {0};
4    for(int i = 0; i < n; i++){
5        c[s[i]-'a']++;
6    }   
7    for(int i = 0; i < n; i++){
8        if((c[s[i]-'a'])==1) return i;
9    }
10    return -1;
11}