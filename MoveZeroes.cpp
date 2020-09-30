class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int last1;
        int last2;
        last1 = last2 = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                if(last1==-1)continue;
                int x=nums[i];
                for(int j=last2+1;j<=i;j++){
                    nums[j]=0;
                }
                nums[last2]=x;
                last2++;
                last1=i;
                
            }else{
                if(last1==-1){
                    last1=i;
                    last2=i;
                }else{
                    last1=i;
                }
            }
        }
    }
};
