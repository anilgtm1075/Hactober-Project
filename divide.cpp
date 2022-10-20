#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend == INT_MIN && divisor==-1) return INT_MAX;
        
        if(dividend == INT_MIN && divisor == 1) return INT_MIN;
        
       long long int a = abs(dividend);
       long long int b = abs(divisor);
        int ans = 0;
        
        bool f = true;
        bool s = true;
        
       
        if(a<b){
            return ans;
        }
        
        if(dividend<0)
            f = false;
        if(divisor<0)
            s = false;
        
        
         bool positive=f^s;
        
        
        
        while(a>=b){
            
            int i=0;
            long long t = b<<i;
            while(t<a){
                
                
                i++;
                t = b<<i;
                
                
                
            }
            
            
            i--;
            
            if(i<0) i=0;
            
            ans+=(1<<i);
            
            a = a - (b<<i);
            
            
        }
        
        if(positive){
            return -ans;
            
        }
        return ans;
        
    }
};
int main() {
// 	vector<string> nums = {"flower","flow","flight"};
// 	int val = 121;
	Solution obj;
	cout<<obj.divide(10,3)<<endl;
	return 0;
}
