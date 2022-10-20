#include <bits/stdc++.h>
using namespace std;

int main() {
    string ans, line;
    bool flag = true;
    while(getline(cin,line)){
        if(line.empty()){
            ans+=" ";
        }
        else if(flag){
            transform(line.begin(), line.end(), line.begin(), ::tolower);
            ans+=line;
            flag = false;
        }
        else{
            string temp1 = line.substr(0,1);
            string temp2  = line.substr(1);
            transform(temp1.begin(), temp1.end(), temp1.begin(), ::toupper);
            transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);
            ans= ans+temp1+temp2;
        }
    }
    cout<<ans<<endl;
	return 0;
}
