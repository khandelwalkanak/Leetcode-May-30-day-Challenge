class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int newColor, int prev)
    {
        int n = image.size();
        int m = image[0].size();
        if(r < 0 || r >= n || c < 0 || c >= m || image[r][c] != prev) 
        {
            return;
        }    
        image[r][c] = newColor;

        dfs(image, r + 1, c, newColor, prev);
        dfs(image, r - 1, c, newColor, prev);
        dfs(image, r, c + 1, newColor, prev);
        dfs(image, r, c - 1, newColor, prev);
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        if(image[sr][sc] != newColor)
        {
            dfs(image, sr, sc, newColor, image[sr][sc]);
        }
        return image;
}
};