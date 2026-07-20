class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        for(int i=s.length()-1;i>=0;i--){
            
            if(s[i]!=' '){
                length++;
            }else if(s[i]==' '&& length==0){
                continue;
            }
            else{
                return length;
            }
        }
        return length;
    }
};