#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        int k = 2;
        for(int i=2; i < nums.size(); i++){
            if (nums[k-2] != nums[i]){
                nums[k] = nums[i];
                k++;
            }

        }
        return k;
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,1,2,2,3};
    int newLength = sol.removeDuplicates(nums);
    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}