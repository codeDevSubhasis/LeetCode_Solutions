class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int cols=mat[0].size();
        vector<int>vec;
        for(int i=0;i<row;i++){
            for(int j=0;j<cols;j++){
                vec.push_back(mat[i][j]);
            }
        }
        vector<vector<int>>ans(r,vector<int>(c));
        int k=0;
        if(r*c>vec.size() || r*c<vec.size() ){
            return mat;
        }
        else{
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    ans[i][j]=vec[k];
                    k++;

                }
            }
        }
        return ans;
        
    }
};