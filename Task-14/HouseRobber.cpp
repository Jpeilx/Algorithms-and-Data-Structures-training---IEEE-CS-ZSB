class Solution {
public:
    int rob(vector<int>& nums) {
        int first= 0 , second = 0  ; 
        for (int i = 0 ; i<nums.size() ; i++){
            nums[i] = max(second , first+nums[i]) ; 
            first = second ; 
            second = nums[i] ; 
        }
        return second ; 
    }
};
