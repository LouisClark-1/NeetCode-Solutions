#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        seen.reserve(nums.size());
        for (const int& num : nums) {
            if (seen.contains(num)) {
                return true;
            }
            seen.emplace(num);
        }
        return false;
    }
};