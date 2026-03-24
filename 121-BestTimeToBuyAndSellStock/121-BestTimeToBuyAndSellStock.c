// Last updated: 3/24/2026, 8:38:36 PM
int maxProfit(int* prices, int pricesSize) {
    int l = 0, r = 1, max = 0;
    while(r < pricesSize){
        int x = prices[r]-prices[l];
        if(x < 0){
            l = r; 
        }
        if(max < x){
            max = x;
        }
        r++;
    }
    return max;
}