// Last updated: 3/24/2026, 8:38:19 PM
int numWaterBottles(int numBottles, int numExchange) {
    return numBottles + (numBottles-1)/(numExchange-1);
}