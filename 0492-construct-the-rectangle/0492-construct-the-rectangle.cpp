class Solution {
public:
    vector<int> constructRectangle(int area) {
        long long flen = 0;
        long long currlen = 0;
        long long fwid = 0;
        long long currwid = 1;
        long long fdiff = INT_MAX;
        long long currdiff =0;
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