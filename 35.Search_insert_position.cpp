// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4
// Constraints:
// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums contains distinct values sorted in ascending order.
// -104 <= target <= 104
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int searchInsert(vector<int>& nums,int target){
        for(int i=0;i<nums.size();i++){
            if(target<=nums[i]) return i;
        }
        return nums.size();   
    }
};
int main(){
    vector<int>nums={1,3,5,6};
    int target=2;
    Solution sol;
    cout<<sol.searchInsert(nums,target);
}