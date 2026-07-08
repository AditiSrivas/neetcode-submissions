class Solution {
public:

    string encode(vector<string>& strs) {
        string result ="";

        for (int i=0; i<strs.size(); i++) {
            string s = strs[i];
            result += to_string(s.size())+"#"+s;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i=0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;

            int len = stoi(s.substr(i, j-i));
            string temp = s.substr(j+1, len);
            result.push_back(temp);
            i = j+len+1;
        }
        return result;
    }
};
