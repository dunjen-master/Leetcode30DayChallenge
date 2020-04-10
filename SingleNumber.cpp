class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return 0;
        
        int xxoorr=0;
        
        for(auto it:nums){
            xxoorr^=it;
        }
        
        return xxoorr;
    }
};
