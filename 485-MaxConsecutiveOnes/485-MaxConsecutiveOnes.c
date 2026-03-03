// Last updated: 3/3/2026, 1:56:36 PM
1int strStr(char* haystack, char* needle) {
2    int n = strlen(haystack);
3    int m = strlen(needle);
4
5    if (m == 0) return 0;  
6
7    for (int i = 0; i <= n - m; i++) {
8        int j;
9        for (j = 0; j < m; j++) {
10            if (haystack[i + j] != needle[j]) {
11                break;
12            }
13        }
14        if (j == m) {
15            return i; 
16    }
17}
18return -1;
19}