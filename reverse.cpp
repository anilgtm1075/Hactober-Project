#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int A) {
        bool isNeg = A<0?true:false;
        long long int res = 0;
        long long int  x = abs(A);
        while(x){
            int digit = x%10;
            res = res*10 + digit;
            x = x/10;
        }
        res = isNeg?-res:res;
        if(res < INT_MIN || res > INT_MAX){
            return false;
        }
        return (int ) res;
    }
};
int main() {
// 	vector<string> nums = {"flower","flow","flight"};
// 	int val = 121;
	Solution obj;
	cout<<obj.reverse(123)<<endl;
	return 0;
}
