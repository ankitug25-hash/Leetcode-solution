class Solution {
public:
vector<string> ans;

void solve(string current, int open, int close, int n) {
    // base case
    if(current.length() == 2*n) {
        ans.push_back(current);
        return;
    }
    if(open < n) {
        current.push_back('(');
        solve(current, open +1, close, n);
        current.pop_back();
    }
if(close < open) {
    current.push_back(')');
  solve(current, open , close + 1, n);
        current.pop_back();
}
}
    vector<string> generateParenthesis(int n) {
        solve("", 0, 0, n);
  return ans;
    }
};