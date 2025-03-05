
    /*
    Time complexity : O(N)
    Space complexity : O(N)
    */
    
    
    

    
    class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> result;
        int n = nums.size();
        for(auto& i: nums){
            if(result.count(i)){
                result[i]++;
            }
            else{
                result[i] = 1;
            }
        }
        vector<int> answer;
        for(auto itr: result){
            if(itr.second > (n/3)){
                answer.push_back(itr.first);
            }
        }
        return answer;
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/majority-element-ii/description/
    */
    
    
