
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */
    
    
    /*
    Additional Notes : None
    */

    
    class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x = 1;
        vector<int> answer(nums.size(), 0), prefix(nums.size(), 0), suffix(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++){
            x = x * nums[i];
            prefix[i] = x;
        }
        x = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            x = x * nums[i];
            suffix[i] = x;
        }
        x = 1;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                x = suffix[i + 1];
            }
            else if(i == (nums.size()) - 1){
                x = prefix[i - 1];
            }
            else{
                x = prefix[i - 1] * suffix[i + 1];
            }
            
            answer[i] = x;
        }
        return answer;
    }
};

    
    
    /*
    Author : AdityaR0811
    Question Link : -
    */
    
    