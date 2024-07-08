class Solution {
public:
    void createUpdateMapping(string& str) {
        //find mappping
        char start = 'a';
        char mapping[300] = {0};

        for(auto ch: str) {
            if(mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }

        //update the string
        for(int i=0; i<str.length(); i++) {
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
                vector<string> ans;
        //firstly normalise the pattern
        createUpdateMapping(pattern);
        
        //saare words k sath khelna h 
        for(string s: words) {
            string tempString = s;         
            //normalise tempString
            createUpdateMapping(tempString);
            if(tempString == pattern) {
                //it means, that "s" wali string was a valid answer
                ans.push_back(s);
            }
        }
    return ans;
    }
};