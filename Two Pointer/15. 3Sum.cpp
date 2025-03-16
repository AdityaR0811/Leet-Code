
    /*
    Time complexity : O(n^2)
    Space complexity : O(k)
    */


    
    //Two Pointer approach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int outer = 0;
        set<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(outer = 0; outer < nums.size() - 1; outer++){
            int left = outer + 1, right = nums.size() - 1;
            while(left < right){
                if((nums[left] + nums[right] + nums[outer]) == 0){
                    result.insert({nums[left], nums[right], nums[outer]}); 
                    right--;
                    left++;
                }
                else if((nums[left]+nums[right]+nums[outer]) > 0){
                    right--;
                }
                else if((nums[left]+nums[right]+nums[outer]) < 0){
                    left++;
                }
            }
        }
        return vector<vector<int>>(result.begin(), result.end());
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/3sum/
    */
    
    
