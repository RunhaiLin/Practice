class Solution {
public:
    bool validPalindrome(string s) {        
        int start = 0;
        int end = s.length()-1;
        int chance = 1;
        while (start<end){
            if (s[start] == s[end]){
                start ++;
                end --;
            }else{
                if (chance == 0){
                    return false;
                } else{
                    return Work(s,start+1,end) || Work(s,start,end-1);
                }
            }
        }
        return true;
    }
    
    bool Work(string s,int start,int end){
        while (start<end){
            if (s[start] == s[end]){
                start ++;
                end --;
            }else{
                return false;
            }
        }
        return true;
    }
    
  
};