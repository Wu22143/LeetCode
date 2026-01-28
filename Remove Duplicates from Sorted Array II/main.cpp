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
    cout << "New length: " << newLength << endl; // Output: New length: 5
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " "; // Output: Modified array: 1 1 2 2 3 
    }
    cout << endl;
    return 0;
}