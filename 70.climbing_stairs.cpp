// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
// Example 1:
// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps
// Example 2:
// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step
// Constraints:
// 1 <= n <= 45
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int x=2,y=3,ans;
        for(int i=4;i<=n;i++){
            ans=x+y;
            x=y;y=ans;
        }
        return ans;
    }
};
int main(){
    Solution sol;
    int n=4;
    cout<<sol.climbStairs(n);
}