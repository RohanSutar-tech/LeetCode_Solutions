class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy_price=prices[0];
        int current_profit=0, max_profit=0;

        for(int i=0; i<prices.size(); i++){

            if(prices[i]<buy_price){
                buy_price=prices[i];
            }
            else{

                current_profit=prices[i]-buy_price;

                if(current_profit>max_profit){
                    max_profit=current_profit;
                }
            }
        }

        return max_profit;
        
    }
};