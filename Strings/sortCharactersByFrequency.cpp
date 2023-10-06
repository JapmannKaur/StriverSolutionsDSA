// code
class Solution {
public:
    static bool compare(const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    }

    string frequencySort(string s) {
        map<char, int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        string res="";
        vector<pair<char, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), compare);
        for(const auto& e:vec) {
            for(int i=0;i<e.second;i++) {
                res += e.first;
            }
        }
        return res;
    }
};

// question link
// https://leetcode.com/problems/sort-characters-by-frequency
