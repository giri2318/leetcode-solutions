// Last updated: 2/24/2026, 12:08:44 PM
1bool isAnagram(char* s, char* t) {
2    int S = strlen(s), T = strlen(t);
3    if (S != T) return false;
4
5    int c[26] = {0};  
6
7    for (int i = 0; i < S; i++) {
8        c[s[i] - 'a']++;  
9        c[t[i] - 'a']--;  
10    }
11
12    for (int i = 0; i < 26; i++) {
13        if (c[i] != 0){
14            return false;
15        } 
16    }
17    return true;
18}