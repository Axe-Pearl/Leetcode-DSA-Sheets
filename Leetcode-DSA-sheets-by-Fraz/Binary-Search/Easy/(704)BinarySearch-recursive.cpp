//link - https://leetcode.com/problems/binary-search/

// iterative approach

class Solution {
public:
     int index = -1;
    int searchInbinary(vector<int>nums,int target,int low, int high){
        int mid = (low + high)/2;
        if(high>=low){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                return searchInbinary(nums, target, low, mid-1);
            }
            else if(nums[mid] < target){
                return searchInbinary(nums, target, mid+1, high);
            }
        }
        return index;
    }
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        return searchInbinary(nums,target,low, high);
    }
};
