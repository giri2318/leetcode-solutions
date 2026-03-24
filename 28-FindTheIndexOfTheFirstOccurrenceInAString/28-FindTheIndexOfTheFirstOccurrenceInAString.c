// Last updated: 3/24/2026, 8:38:38 PM
int strStr(char* haystack, char* needle) {
  char* result = strstr(haystack, needle);
    
       if (result == NULL) {
           return -1;
        }
    
    return result - haystack;   
}