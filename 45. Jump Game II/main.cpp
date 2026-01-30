#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0;
        int currEnd = 0;
        int maxReach = 0;
        for (int i=0; i < nums.size() - 1; i++){
            maxReach = max(maxReach, i + nums[i]);
            if (i == currEnd){
                jump++;
                currEnd = maxReach;
            }

            if (currEnd >= nums.size() - 1) break;
        }
        return jump;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,3,1,1,4};
    int result = sol.jump(nums);
    std::cout << result << std::endl;
    return 0;
}