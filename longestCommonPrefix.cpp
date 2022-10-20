#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = strs[0];
        
        for(int i=1;i<strs.size();i++){
            string temp;
            
            for(int j=0;j<strs[i].size() and j<ans.size();j++){
                if(ans[j]!=strs[i][j])
                    break;
                
                temp+=ans[j];
                
            }
            
            ans = temp;
            
        }
        
        return ans;
    }
};
int main() {
	vector<string> nums = {"flower","flow","flight"};
// 	int val = 121;
	Solution obj;
	cout<<obj.longestCommonPrefix(nums)<<endl;
	return 0;
}
