
    /*
    Time complexity : O(nlogn)
    Space complexity : O(n)
    */
    
    
    /*
    Additional Notes : None
    */

    
    class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        merge(nums, 0, nums.size() - 1);
        return nums;
    }

    void merge(vector<int>& arr, int left, int right) {
        if (left >= right) return;
        
        int mid = left + (right - left) / 2;
        merge(arr, left, mid);
        merge(arr, mid + 1, right);
        
        vector<int> temp;
        int i = left, j = mid + 1;
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
            else temp.push_back(arr[j++]);
        }
        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= right) temp.push_back(arr[j++]);
        
        for (int k = left; k <= right; k++) arr[k] = temp[k - left];
    }
};




    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/sort-an-array/
    */
    
    