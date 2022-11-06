
class Solution {
public:
        bool vowelOrConsonant(char x)
{
     if (x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' || x == 'O' || x == 'U')
            return true;
    else
        return false;
}
    string reverseVowels(string s) {
        int l = 0;
        int r = s.length()-1;
        while(l<r){
            if(vowelOrConsonant(s[l])&&vowelOrConsonant(s[r])){
                swap(s[l],s[r]);
                l++;r--;
            }
            else if(!vowelOrConsonant(s[l])){
                l++;
            }
            else{
                r--;
            }
        }
        return s;
    }
};   