#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int TotalProfit = 0;
        for (int i=1;i<prices.size();i++){
            if (prices[i] > prices[i-1]){
                TotalProfit += prices[i] - prices[i-1];
            }
        }
        return TotalProfit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7,1,5,3,6,4};
    int maxProfit = sol.maxProfit(prices);
    cout << "Max Profit: " << maxProfit << endl; 
    return 0;
}