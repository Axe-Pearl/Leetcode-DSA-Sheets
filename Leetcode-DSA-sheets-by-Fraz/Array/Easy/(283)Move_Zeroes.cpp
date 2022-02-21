class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i = nums.size()-1;i>=0;i--){
            if(nums[i] == 0){
                nums.erase(nums.begin()+i);
            }
        }
        int rest = n - nums.size();
        for(int i = 0;i<rest;i++){
            nums.push_back(0);
        }
    }
};
