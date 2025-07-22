// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".
// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
// Constraints:
// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters if it is non-empty.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>&v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string a=v[0],b=v[n-1];
        for(int i=0;i<min(a.size(),b.size());i++){
            if(a[i]!=b[i]){
                return ans;
            }
            ans+=a[i];
        }
        return ans;
    }
};
int main(){
    vector<string>v={"flower","flow","flight"};
    Solution sol;
    cout<<sol.longestCommonPrefix(v);
}