class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long maxDiagSq = -1;
        int bestArea = 0;

        for (int i = 0; i < dimensions.size(); i++) {
            long long l = dimensions[i][0];
            long long w = dimensions[i][1];

            long long diagSq = l*l + w*w;   // diagonal^2
            int area = l * w;

            if (diagSq > maxDiagSq) {
                maxDiagSq = diagSq;
                bestArea = area;
            }
            else if (diagSq == maxDiagSq) {
                bestArea = max(bestArea, area);
            }
        }
        return bestArea;
    }
};