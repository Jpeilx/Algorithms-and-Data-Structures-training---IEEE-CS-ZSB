class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1)
            return nums[0] ; 
        return max( houserob1(nums),houserob2(nums));
        
    }
    int houserob1 (vector<int>nums) {
         int first= 0 , second = 0  ; 
        for (int i = 1 ; i<nums.size() ; i++){
            nums[i] = max(second , first+nums[i]) ; 
            first = second ; 
            second = nums[i] ; 
        }
        return second ; 
    }
    int houserob2 (vector<int>nums) {
         int first= 0 , second = 0  ; 
        for (int i = 0 ; i<nums.size()-1 ; i++){
            nums[i] = max(second , first+nums[i]) ; 
            first = second ; 
            second = nums[i] ; 
        }
        return second ; 
    }
};
