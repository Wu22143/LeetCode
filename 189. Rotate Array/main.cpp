
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void Reverse(vector<int>& nums, int begin, int end){
        while(begin < end){
            int tmp = nums[begin];
            nums[begin] = nums[end];
            nums[end] = tmp;
            begin++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        //取餘數可以知道要旋轉幾個
        k = k % nums.size();
        //先將整個陣列反轉
        Reverse(nums, 0 , nums.size()-1);
        //再將前k個反轉
        Reverse(nums, 0, k-1);
        //最後將後面n-k個反轉
        Reverse(nums, k, nums.size()-1);

    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    sol.rotate(nums, k);
    for(int num: nums){
        std::cout << num << " ";
    }
    return 0;
}