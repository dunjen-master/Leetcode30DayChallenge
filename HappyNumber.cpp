class Solution {
public:
    bool isHappy(int n) {
        
        for(int i=0;i<=30;i++){
            
            long long int ans=0;
            int x=n;
            while(x){
                ans+=(x%10)*(x%10);
                x=x/10;
            }
            
            if(ans==1)return true;
            
            n=ans;
        }
        
        return false;
        
    }
};
