// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
// You must not use any built-in exponent function or operator.
// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
// Example 1:
// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:
// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
// Constraints:
// 0 <= x <= 231 - 1
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x<=3) return 1;
        int st=1,en=x;
        while(st<=en){
            int mid=st+(en-st)/2;
            if((long long)mid*mid==x) return mid;
            if((long long)mid*mid>x){
                en=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return en;
    }
};
int main(){
    Solution sol;int x=8;
    cout<<sol.mySqrt(x);
}