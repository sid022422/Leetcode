class Solution {
public:
    bool check(vector<int>& nums,int val){
        int n=nums.size();
        long long count=0;
        bool ans=true;
        for(int i=0;i<n;i++){
            count+=(nums[i]-val);
            if(count>0){
                ans=false;
                break;
            }
        }
        return ans;
    }
    int minimizeArrayValue(vector<int>& nums) {
         vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int start=temp[0];
        int end=temp[temp.size()-1];
        while(start<=end){
            int mid=start+(end-start)/2;
            if(check(nums,mid)){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
        
    }
};