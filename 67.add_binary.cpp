// Given two binary strings a and b, return their sum as a binary string.
// Example 1:
// Input: a = "11", b = "1"
// Output: "100"
// Example 2:
// Input: a = "1010", b = "1011"
// Output: "10101"
// Constraints:
// 1 <= a.length, b.length <= 104
// a and b consist only of '0' or '1' characters.
// Each string does not contain leading zeros except for the zero itself.
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string addBinary(string &a,string &b){
        if(a=="0") return b;
        else if(b=="0") return a;
        else{
            string ans="";
            int x=a.size()-1,y=b.size()-1;
            int tmp=0;
            while(x>=0||y>=0||tmp){
                if(x>=0){
                    tmp+=(a[x]-'0');x--;
                }
                if(y>=0) {
                    tmp+=(b[y]-'0');y--;
                }
                ans=to_string(tmp%2)+ans;
                tmp/=2;
            }
            return ans; 
        } 
    }
};
int main(){
    Solution sol;
    string a="11",b="1";
    cout<<sol.addBinary(a,b)<<endl;
}