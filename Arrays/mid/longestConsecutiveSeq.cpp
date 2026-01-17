#include<iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;


//better

int longestConSeq(vector<int> & nums){
    sort(nums.begin(),nums.end());
    int length=1;
    int maxlen=0;
    int curEle=nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]==curEle+1){
            length++;

        }
        else if(nums[i]==curEle){
            continue;
        }
        else{
            length=1;
        }
        curEle = nums[i];
        maxlen=max(maxlen,length);
    }

    return maxlen;
}

//optimal >> 

int longestConSeq(vector<int>& nums) {
    unordered_set<int> st;

    // insert all elements
    for (int x : nums) {
        st.insert(x);
    }

    int longest = 0;

    for (int x : nums) {

        // start of sequence
        if (st.find(x - 1) == st.end()) {

            int curr = x;
            int len = 1;

            while (st.find(curr + 1) != st.end()) {
                curr++;
                len++;
            }

            longest = max(longest, len);
        }
    }

    return longest;
}

int main(){
    vector<int> nums = {102,4,100,1,101,3,2,1,1};
    int longest = longestConSeq(nums);

    cout<<longest<<endl;

    return 0;

}