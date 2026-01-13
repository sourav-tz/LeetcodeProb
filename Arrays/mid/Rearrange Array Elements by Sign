// LeetCode 2149 - Rearrange Array Elements by Sign
// https://leetcode.com/problems/rearrange-array-elements-by-sign/


class Solution {
    public int[] rearrangeArray(int[] nums) {

        // aprch 1 >>


        // int size=(nums.length)/2;
        // int pve []=new int[size];
        // int nve []=new int[size];
        // int k=0;
        // int l=0;
        // for(int j=0;j<2*size;j++){
        //     if(nums[j]>0){
        //         pve[k++]=nums[j];
        //     }else{
        //         nve[l++]=nums[j];
        //     }
        // }
        // k=0;
        // l=0;
        // for(int i=0;i<2*size;i++){
        //     if(i%2!=0){
        //         nums[i]=nve[k++];
        //     }else{
        //         nums[i]=pve[l++];
        //     }
            
        // }

        // return nums;


        // aprch 2 >>

        int res []= new int [nums.length];
        int p=0,q=1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>0){
                res[p]=nums[i];
                p+=2;
            }else{
                res[q]=nums[i];
                q+=2;
            }
        }

        return res;
    }
}