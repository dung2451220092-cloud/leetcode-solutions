class Solution {
public:
    vector<long long> memo;
    
    long long helper(int i, vector<int>& power) {
        if (i >= power.size()) return 0;

        if (memo[i] != -1) return memo[i];

        long long val = power[i];
        long long sum = 0;
        int nextIDX = i;
    
        while (nextIDX < power.size() && power[nextIDX] == val) {
            sum += power[nextIDX];
            nextIDX++;
        }
        long long skip = helper(nextIDX, power);

        int index = nextIDX;
        while (index < power.size() && power[index] <= val + 2) {
            index++;
        }
        
        long long take = sum + helper(index, power);

        return memo[i] = max(take, skip);
    }

    long long maximumTotalDamage(vector<int>& power) {
        sort(power.begin(), power.end());
        memo.resize(power.size(), -1);
        
        return helper(0, power);
    }
};