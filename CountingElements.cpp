class Solution {
public:
    int countElements(vector<int>& arr) {
        int n=arr.size();
        assert(n>0);
        
        map<int,int>mp;
        
        for(auto it:arr){
            mp[it]++;
        }
        
        int ans=0;
        
        for(auto &it:mp){
            if(mp.find(it.first+1)!=mp.end()){
                ans+=it.second;
            }
        }
        
        return ans;
    }
};
