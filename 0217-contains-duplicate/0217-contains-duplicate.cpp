#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        
        for (int num : nums) {
            // If the element is already in the set, we found a duplicate
            if (seen.find(num) != seen.end()) {
                return true;
            }
            // Otherwise, add it to the set
            seen.insert(num);
        }
        
        return false;
    }
};
