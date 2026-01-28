#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k = 0;
        for(int i=1; i< nums.size();i++){
            if (nums[k] != nums[i]){
                nums[k+1] = nums[i];
                k++;
            }
        }
        return k+1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int newLength = sol.removeDuplicates(nums);
    cout << "New length: " << newLength << endl; // Output: New length: 5
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " "; // Output: Modified array: 0 1 2 3 4 
    }
    cout << endl;
    return 0;
}