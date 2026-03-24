// Last updated: 3/24/2026, 8:38:25 PM
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
int findContentChildren(int* g, int gS, int* s, int sS) {

 qsort(g, gS, sizeof(int), compare);
 qsort(s, sS, sizeof(int), compare);

        int c = 0,i = 0,j = 0;
        while(i < gS && j < sS){
            if(g[i] <= s[j]){
                c++;
                i++;
                j++;
            }
            else{
                j++;
            }
                
        }
        return c;
}