class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle = {{1}};
        for(int i = 0; i < numRows - 1; i++){
            vector<int> temp = triangle[i];
            temp.insert(temp.begin(), 0);
            temp.push_back(0);
            vector<int> row = {};
            for(int j = 0; j < temp.size() - 1; j++){
                row.push_back(temp[j] + temp[j+1]);
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};