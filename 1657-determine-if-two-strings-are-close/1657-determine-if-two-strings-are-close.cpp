class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false;
        }
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        unordered_set<char> st1;
        unordered_set<char> st2;
        for(char ch:word1){
            mp1[ch]++;
        }
        for (char c:word2){
            mp2[c]++;
        }
        for(auto p :mp1){
            st1.insert(p.first);
        }
                for(auto p :mp2){
            st2.insert(p.first);
        }
        if(st1!=st2){
            return false;
        }
        vector<int> freq1;
        vector<int> freq2;

        for(auto p : mp1) {
            freq1.push_back(p.second);
        }

        for(auto p : mp2) {
            freq2.push_back(p.second);
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};