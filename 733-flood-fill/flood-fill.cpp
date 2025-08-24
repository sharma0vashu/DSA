class Solution {
public:
void fill(int i,int j ,vector<vector<int>> &image,int newcolor,int oldcolor,int n,int m){
    if(i<0 || j<0||i==n||j==m||image[i][j]!=oldcolor) return;

    image[i][j]=newcolor;
     fill(i + 1, j, image, newcolor, oldcolor, n, m); // down
        fill(i - 1, j, image, newcolor, oldcolor, n, m); // up
        fill(i, j + 1, image, newcolor, oldcolor, n, m); // right
        fill(i, j - 1, image, newcolor, oldcolor, n, m); // left

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor=image[sr][sc];
        if (oldcolor == color) return image;
        int n=image.size();
        int m=image[0].size();
         fill(sr,sc,image,color, oldcolor,n, m);
    
    return image;
    }
};