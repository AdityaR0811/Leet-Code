
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */
    
    
    /*
    Additional Notes : None
    */

    
    class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> answer;
        answer = nums;
        for(int i = 0; i < nums.size(); i++){
            answer.push_back(nums[i]);
        }
        return answer;
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : .
    */
    
    