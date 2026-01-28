#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i=m+n-1; i >= 0 ; i--){
            std::cout << "i: " << i << " m: " << m << " n: " << n << std::endl;
            if (n==0){
                break;
            }
            else if (m==0){
                nums1[i] = nums2[n-1];
                n-=1;
                continue;
            }

            if (nums1[m-1] < nums2[n - 1]){
                nums1[i] = nums2[n-1];
                n-=1;
            }
            else
            {
                nums1[i] = nums1[m-1];
                m-=1;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;

    sol.merge(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}