// Leaders in an Array
// https://takeuforward.org/plus/dsa/problems/leaders-in-an-array

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> res;
      int maxi= INT_MIN;
      for(int i=nums.size()-1;i>=0;i--){
        if(maxi<nums[i]){
            res.push_back(nums[i]);
            maxi=nums[i];
        }
      }
      return res;
    }
};