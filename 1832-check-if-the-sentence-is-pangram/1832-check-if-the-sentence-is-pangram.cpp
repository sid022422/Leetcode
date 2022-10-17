class Solution {
public:
    bool checkIfPangram(string s) {
        int ans=0;
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']==0){
                v[s[i]-'a']=1;
                ans++;
            }
            if(ans==26)return true;
        }
        return false;
        
    }
};