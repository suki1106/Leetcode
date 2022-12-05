class Solution {
public:
    bool checkIfPangram(string sentence) {
        int table[26] ={0};
        for(auto c : sentence)
            table[c-'a']++;
        
        for(int i = 0 ; i <26;i++)
            if(table[i] ==0)return false;
        return true;
    }
};