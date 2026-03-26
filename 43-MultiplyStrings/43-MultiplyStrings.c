// Last updated: 3/26/2026, 9:18:18 PM
1int lengthOfLastWord(char* s) {
2        int n = strlen(s);
3        int c = 0;
4        int i = n-1;
5        while(i >=0 && s[i] == ' '){
6            i--;
7        }
8        while(i >= 0 && s[i] != ' '){
9                c++;
10                i--;
11        }
12        return c;
13}