class Solution {
    public:
        bool wordBreak(string s, vector<string>& wordDict) {
            int n = s.size();
            unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
    
            // Find min and max word lengths to optimize inner loop
            int minLen = INT_MAX, maxLen = 0;
            for (const string& word : wordDict) {
                minLen = min(minLen, (int)word.size());
                maxLen = max(maxLen, (int)word.size());
            }
    
            vector<bool> dp(n + 1, false);
            dp[0] = true;
    
            for (int i = 1; i <= n; ++i) {
                // Only check substrings of lengths present in wordDict
                for (int len = minLen; len <= maxLen; ++len) {
                    if (i - len < 0) continue;
                    if (!dp[i - len]) continue;
                    // No substring creation, just compare directly
                    if (wordSet.count(s.substr(i - len, len))) {
                        dp[i] = true;
                        break;
                    }
                }
            }
            return dp[n];
        }
    };

    

    // this is optimized code written in cpp