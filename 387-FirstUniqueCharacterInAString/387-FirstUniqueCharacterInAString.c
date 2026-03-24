// Last updated: 3/24/2026, 8:38:27 PM
int firstUniqChar(char* s) {
    int n = strlen(s);
    int c[26] = {0};
    for(int i = 0; i < n; i++){
        c[s[i]-'a']++;
    }   
    for(int i = 0; i < n; i++){
        if((c[s[i]-'a'])==1) return i;
    }
    return -1;
}