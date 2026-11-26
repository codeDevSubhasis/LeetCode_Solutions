class Solution {
public:
    vector<int> constructRectangle(int area) {
        int flen = 0;
        int currlen = 0;
        int fwid = 0;
        int currwid = 1;
        int fdiff = INT_MAX;
        int currdiff =0;
        vector<int>ans;
        while(currwid <= area){
            if(area % currwid == 0){
                currlen = area / currwid;
                currdiff = currlen - currwid;
                if(currlen <= fdiff && currlen >= currwid){
                    fwid = currwid;
                    flen = currlen;
                }
            }
            currwid++;
            
        }
        ans.push_back(flen);
        ans.push_back(fwid);
        return ans;

    }
};