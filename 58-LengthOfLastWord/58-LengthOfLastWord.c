// Last updated: 4/6/2026, 6:30:36 PM
int lengthOfLastWord(char* s) {
        int n = strlen(s);
        int c = 0;
        int i = n-1;
        while(i >=0 && s[i] == ' '){
            i--;
        }
        while(i >= 0 && s[i] != ' '){
                c++;
                i--;
        }
        return c;
}