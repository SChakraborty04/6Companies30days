//https://leetcode.com/problems/circle-and-rectangle-overlapping/description/
//Microsoft 1
class Solution {
public:
    bool checkOverlap(int r, int xC, int yC, int x1, int y1, int x2, int y2) {
        int x=max(x1,min(xC,x2));
        int y=max(y1,min(yC,y2));
        int dis=(x-xC)*(x-xC)+(y-yC)*(y-yC);
        return dis<=r*r;
    }
};