#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0, lowestPrice = INT_MAX;
        for(int price : prices){
            if (price < lowestPrice){
                lowestPrice = price;
            }
            else
            {
                int Profit = price- lowestPrice;
                if (Profit > MaxProfit){
                    MaxProfit = Profit;
                }
            }
        }
        return MaxProfit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7,1,5,3,6,4};
    int maxProfit = sol.maxProfit(prices);
    cout << "Max Profit: " << maxProfit << endl; 
    return 0;
}
