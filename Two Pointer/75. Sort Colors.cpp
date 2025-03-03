
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */
    
    
    

    
    class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        while(mid <= right)
        {
            if(nums[mid] == 0){
                swap(nums[left], nums[mid]);
                left++;
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[right], nums[mid]);
                right--;
            }
            else if(nums[mid] == 1){
                mid++;
            }
        }
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/sort-colors/description/
    */
    
    
