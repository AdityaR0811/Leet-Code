
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */
    
    
    /*
    Additional Notes : None
    */

    
    class Solution(object):
    def removeElement(self, nums, val):
        low = 0
        high = len(nums) - 1


        while low <= high:
            if nums[high] == val:
                high -= 1
            elif nums[low] == val:
                nums[low],nums[high] = nums[high],nums[low]
                high -= 1
                low += 1
            else:
                low += 1

        return low

     
       
       
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/remove-element/
    */
    
    