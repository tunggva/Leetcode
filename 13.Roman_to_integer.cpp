#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman={
            {'I',1} , {'V',5} , {'X',10} , {'L',50} , {'C',100} , {'D',500} , {'M',1000}
        };
        int sum=0;
        for(int i=0;i<s.size()-1;i++){
            int x=roman[s[i]];
            int y=roman[s[i+1]];
            if(x<y){
                sum-=x;
            }
            else{
                sum+=x;
            }
        }
        sum+=roman[s[s.size()-1]];
        return sum;
    }
};
int main(){
    string s;cin>>s;
    Solution sol;
    cout<<sol.romanToInt(s);
}