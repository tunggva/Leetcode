#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int solve(string word){
        int ans=1,res=1;
        char tmp=word[0];
        for(int i=1;i<word.size();i++){
            if(word[i]==tmp){
                res++;
            }
            else{
                ans+=(res-1);
                tmp=word[i];
                res=1;
            }
        }
        ans+=(res-1);
        return ans;
    }
};
int main(){
    Solution sol;
    string word="abbcccc";
    cout<<sol.solve(word);
}