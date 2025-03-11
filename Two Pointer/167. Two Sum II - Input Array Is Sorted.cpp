
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */
    
    
    

    
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while(left < right){
            if((numbers[left]+numbers[right]) == target){
                break;
            }
            else if((numbers[left]+numbers[right]) > target){
                right--;
            }
            else if((numbers[left]+numbers[right]) < target){
                left++;
            }
        }
        return {left + 1, right + 1};
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
    */
    
    
