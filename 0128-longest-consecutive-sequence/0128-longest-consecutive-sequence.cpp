class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int> s;
        int ans = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
           s.insert(nums[i]); 
        }
        
        for(int i=0; i<nums.size(); i++){
            
            if(s.find(nums[i]-1) != s.end()){
                continue;
            }
            else{
                int count = 0;
                int curr = nums[i];
                while(s.find(curr) != s.end()){
                    count++;
                    curr++;
                    ans = max(ans , count);
                        
                }
            }
        }
        return ans;
    }
};