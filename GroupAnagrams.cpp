class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<pair<char,int> >,vector<string> >mp;vector<vector<string> >v;
        
        for(int i=0;i<strs.size();i++){
            
            vector<int>has(26,0);
            string str=strs[i];
            
            for(int j=0;j<str.size();j++){
                has[str[j]-'a']++;
            }
            
            vector<pair<char,int> >has2;
            
            for(int i=0;i<26;i++){
                if(has[i]!=0){
                    has2.push_back(make_pair((char)(i+'a'),has[i]));
                }
            }
            
            mp[has2].push_back(str);
            
        }
        
        for(auto it:mp){
            v.push_back(it.second);
        }
        
        return v;
    }
};
