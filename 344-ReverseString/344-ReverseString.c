// Last updated: 2/23/2026, 5:42:45 PM
void reverseString(char* s, int sSize) {
       int f = 0;
       int l = sSize-1;
       while(f < l){
        char temp = s[f];
        s[f] = s[l];
        s[l] = temp;
        f++;
        l--;
       }
}