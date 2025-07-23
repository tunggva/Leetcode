// You are given a string s and two integers x and y. You can perform two types of operations any number of times.
// Remove substring "ab" and gain x points.
// For example, when removing "ab" from "cabxbae" it becomes "cxbae".
// Remove substring "ba" and gain y points.
// For example, when removing "ba" from "cabxbae" it becomes "cabxe".
// Return the maximum points you can gain after applying the above operations on s.
// Example 1:
// Input: s = "cdbcbbaaabab", x = 4, y = 5
// Output: 19
// Explanation:
// - Remove the "ba" underlined in "cdbcbbaaabab". Now, s = "cdbcbbaaab" and 5 points are added to the score.
// - Remove the "ab" underlined in "cdbcbbaaab". Now, s = "cdbcbbaa" and 4 points are added to the score.
// - Remove the "ba" underlined in "cdbcbbaa". Now, s = "cdbcba" and 5 points are added to the score.
// - Remove the "ba" underlined in "cdbcba". Now, s = "cdbc" and 5 points are added to the score.
// Total score = 5 + 4 + 5 + 5 = 19.
// Example 2:
// Input: s = "aabbaaxybbaabb", x = 5, y = 4
// Output: 20
// Constraints:
// 1 <= s.length <= 105
// 1 <= x, y <= 104
// s consists of lowercase English letters.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int sum=0;string tmp="";
        stack<char>st1,st2;
        if(x>y){
            for(int i=0;i<s.size();i++){
                if(!st1.empty()&&st1.top()=='a'&&s[i]=='b'){
                    st1.pop();
                    sum+=x;
                }
                else st1.push(s[i]);
            }
            while(!st1.empty()){
                tmp+=st1.top();
                st1.pop();
            }
            reverse(tmp.begin(),tmp.end());
            for(int i=0;i<tmp.size();i++){
                if(!st2.empty()&&st2.top()=='b'&&tmp[i]=='a'){
                    st2.pop();
                    sum+=y;
                }
                else st2.push(tmp[i]);
            }
        }
        else{
            for(int i=0;i<s.size();i++){
                if(!st1.empty()&&st1.top()=='b'&&s[i]=='a'){
                    st1.pop();
                    sum+=y;
                }
                else st1.push(s[i]);
            }
            while(!st1.empty()){
                tmp+=st1.top();
                st1.pop();
            }
            reverse(tmp.begin(),tmp.end());
            for(int i=0;i<tmp.size();i++){
                if(!st2.empty()&&st2.top()=='a'&&tmp[i]=='b'){
                    st2.pop();
                    sum+=x;
                }
                else st2.push(tmp[i]);
            }
        }
        return sum;
    }
};
int main(){
    string s;cin>>s;
    int x,y;cin>>x>>y;
    Solution sol;
    cout<<sol.maximumGain(s,x,y);
}
