// 2943. Maximize Area of Square Hole in Grid
// https://leetcode.com/problems/maximize-area-of-square-hole-in-grid/description/?envType=daily-question&envId=2026-01-15


class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {

        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());

        int maxConsecutiveHbars = 1;
        int maxConsecutiveVbars = 1;

        int curConsecutiveHbars = 1;

        for(int i=1;i<hBars.size();i++){
            if(hBars[i]-hBars[i-1]==1){
                curConsecutiveHbars++;
            }else{
                curConsecutiveHbars = 1;
            }

            maxConsecutiveHbars = max(maxConsecutiveHbars,curConsecutiveHbars);
        }

        

        int curConsecutiveVbars = 1;

        for(int i=1;i<vBars.size();i++){
            if(vBars[i]-vBars[i-1]==1){
                curConsecutiveVbars++;
            }else{
                curConsecutiveVbars = 1;
            }

            maxConsecutiveVbars = max(maxConsecutiveVbars,curConsecutiveVbars);
        }

        

        int side = min(maxConsecutiveHbars,maxConsecutiveVbars) + 1;

        return side*side;
    }
};