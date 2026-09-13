class Solution {
public: 
    bool isPalindrome(string s) {
        string lower = "";
        for(auto ch : s) {
            if(ch>='A' and ch<='Z') {
                ch = ch - ('A'-'a');
                lower+=ch;
            }
            else if((ch>='a' and ch<='z') or (ch>='0' and ch<='9')) lower+=ch;
            else continue;
        }
        cout<<lower<<endl;
        string a = lower;
        reverse(a.begin(),a.end());
        cout<<a;
        return a==lower;
    }
};
