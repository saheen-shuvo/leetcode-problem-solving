class Solution {
public:
    bool isEven(int n){
        if(n % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    vector<int> sumZero(int n) {
        vector<int> v;
       if(isEven(n)){
        for(int i = 1; i<=n/2; i++){
            v.push_back(i);
            v.push_back(-i);
        }
       } 
       else{
        for(int i = 1; i<=n/2; i++){
            v.push_back(i);
            v.push_back(-i);
        }
        v.push_back(0);
       }
       return v;
    }
};