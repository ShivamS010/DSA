class Solution {
public:

    vector<int> nCr(int numRows){
        long long res=1;
        vector<int> answer;
        answer.push_back(1);
        for(int i=1;i<numRows;i++){
            res=res*(numRows-i);
            res=res/i;
            answer.push_back(res);
        }
        return answer;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans1;
        for(int i=1;i<=numRows;i++){
            vector<int> temp= nCr(i);
            ans1.push_back(temp);
        }
        return ans1;
    }
};