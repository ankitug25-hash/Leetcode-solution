class Solution {
public:
    int romanToInt(string s) {
       string roman[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int arr[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        int ans = 0;
       int i =0; 
    while(i < s.length()) {
        for(int j =0; j<13; j++) {
            if(s.substr(i, roman[j].length())==roman[j]) {
                ans += arr[j];
                i += roman[j].length();
                break;
            }
        }
    }
    return ans;
    }
};