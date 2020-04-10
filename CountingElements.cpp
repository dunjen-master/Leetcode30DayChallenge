class Solution {
public:
    int countElements(vector<int>& arr) {
        int n=arr.size();
        assert(n>0);
        
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
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
