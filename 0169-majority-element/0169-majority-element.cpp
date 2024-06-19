class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums[0], vote = 0;

        for(int i = 0; i < nums.size(); i++) {
            if (vote == 0) {
                vote++;
                majority = nums[i];
            } else if (majority == nums[i]) {
                vote++;
            } else {
                vote--;
            }
        }
        return majority;
    }
};
