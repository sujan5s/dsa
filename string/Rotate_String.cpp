class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            string reverse = s.substr(i)+s.substr(0,i);
            if(reverse==goal){
                return true;
            }
        }
        return false;
    }
};