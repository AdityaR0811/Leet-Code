
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */
    
    
    /*
    Additional Notes : No
    */

    
    class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map <int, int> hashMap;
        int n = nums.size(); 
        for(int i = 0; i < n; i++){
            int c = target - nums[i];
            if(hashMap.find(c) != hashMap.end()){
                return {hashMap[c], i};
            }
            hashMap[nums[i]] = i;
        }
        return {}; //if no solution is found
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/two-sum/
    */
    
    