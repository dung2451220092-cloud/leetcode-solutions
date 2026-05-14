class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }

    string reverseVowels(string s) {
        int start = 0;
        int right = s.size()-1;

        while(start<right){
            if(!isVowel(s[start])){
                start++;
            }
            if(!isVowel(s[right])){
                right--;
            }
            if(isVowel(s[start]) && isVowel(s[right])){
                swap(s[start++],s[right--]);
            }
        }
        return s;
    }
};