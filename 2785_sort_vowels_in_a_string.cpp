class Solution {
public:
    vector<char> v;
    bool isVowel(char c){
            if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
                return true;
            }
            else{
                return false;
            }
    }
    string sortVowels(string s) {
        for(char c : s){
            if(isVowel(c)){
                v.push_back(c);
            }
        }
        sort(v.begin(), v.end());
        int idx = 0;
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            if(isVowel(c)){
                s[i] = v[idx];
                idx++;
            }
            
        }
        return s;
    }
};