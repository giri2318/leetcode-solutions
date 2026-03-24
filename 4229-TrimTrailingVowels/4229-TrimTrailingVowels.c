// Last updated: 3/24/2026, 8:38:13 PM
char* trimTrailingVowels(char* s) {

    int i = strlen(s)-1;
    while( i >= 0){
        char c = s[i];
        if(c == 'a'||c == 'e'||c == 'i'|| c == 'o'|| c == 'u'||c == 'A'||c == 'E'||c=='I'||c=='O'||c=='U'){
            i--;
        }
        else{
            break;
        }
    }
     s[i+1] = '\0';

        return s;
}
