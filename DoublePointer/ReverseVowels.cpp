#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length()-1;
        vector<char> v{'a','e','i','o','u','A','E','I','O','U'};
        char c [s.length()];
        
        while(start<=end){
            if (!count(v.begin(),v.end(),s[start])){
                c[start] = s[start];
                start ++;
            }
            else if (!count(v.begin(),v.end(),s[end])){
                c[end] = s[end];
                end --;
            }
            else{
                c[end] = s[start];
                c[start] = s[end];
                start ++;
                end --;
            }                    
        }
        return string(c);
    }
    
};

int main(){
    Solution sl;
    string s = sl.reverseVowels("addressvalue");
    cout << s <<endl;
}