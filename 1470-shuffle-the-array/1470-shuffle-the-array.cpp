#include <vector>

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> ans;
        ans.reserve(2 * n); // Optimize memory allocation
        
        for (int i = 0; i < n; ++i) {
            ans.push_back(nums[i]);     // Element from first half (xi)
            ans.push_back(nums[i + n]); // Element from second half (yi)
        }
        
        return ans;
    }
};