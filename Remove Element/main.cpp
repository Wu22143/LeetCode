#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    //第一種解法
    int removeElement(vector<int>& nums, int val) {
        int n = 0;
        int m = nums.size() - 1;

        while(n <= m){
            if (nums[m] == val){
                m--;
                continue;
            }

            if (nums[n] == val){
                nums[n] = nums[m];
                nums[m] = val;
                m--;
            }
            n++;
        }
        return m+1;
    }
    //第二種解法 快慢針
    int removeElement2(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int X = 0;

    Solution sol;
    X = sol.removeElement(nums, val);
    cout << "New length: " << X << endl;
    for(int i=0; i < X; i++){
        cout << nums[i] << " ";
    }
    return 0;

}