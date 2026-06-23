class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for (int i=0; i<nums.size(); ++i){

            auto numfind = find(nums.begin()+i+1, nums.end(), target - nums[i] );

            if(numfind != nums.end()){
                int j = numfind - nums.begin();
                return{i,j};
            }
        }
        return {};
    }
};
