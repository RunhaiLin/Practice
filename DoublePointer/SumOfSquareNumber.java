//https://leetcode.com/problems/sum-of-square-numbers/description/

public boolean judgeSquareSum(int c) {
        long cs = (long) c;
        long s = (long)Math.sqrt(cs);
        long begin = 0;
        long end = s;
        long result;
        while(end>=begin){
            result = end*end+begin*begin;
            if (result == cs){
                return true;
            } else if (result<cs){
                begin++;
            } else{
                end --;
            }
        }
        return false;
        
    }