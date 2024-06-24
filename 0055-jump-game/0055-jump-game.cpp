class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n=nums.size();
        int final_position=n-1;

        for(int i=n-2; i>=0; i--){

            if(i+nums[i]>=final_position){
               final_position=i;
            }
        }
        return final_position == 0;
        
    }
};