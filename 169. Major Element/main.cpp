#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int m;
        int cnt = 0;
        for(int num:nums){
            if (cnt == 0){
                cnt = 1;
                m = num;
            }
            else if (m == num){
                cnt += 1;
            }
            else{
                cnt -=1;
            }
        }
        return m;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,3,2,3};
    cout << sol.majorityElement(nums) << endl;
    return 0;
}