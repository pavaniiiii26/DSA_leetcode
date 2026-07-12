int maxProfit(int* prices, int pricesSize) {
int min=prices[0],max_profit=0;
for(int i=0;i<pricesSize;i++){
    if(prices[i]<min){
        min=prices[i];
    }
    if(max_profit<(prices[i]-min)){
        max_profit=prices[i]-min;

    }
}
return max_profit;
}