

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // To store the value and its index

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // Find the complement of the current number

            if (num_map.find(complement) != num_map.end()) {
                // If the complement is found in the map, return the indices
                return vector<int>{num_map[complement], i};
            }

            // Store the current number and its index in the map
            num_map[nums[i]] = i;
        }

        return {}; // In case no solution is found, although the problem guarantees one
    }
};
