class Solution {
public:
    void generate(int open, int close, string output, vector<string>& ans){
	// base case (we have used all the brackets and can not add any more brackets)
        if (open == 0 && close == 0){
		// add the final string to answer
            ans.push_back(output);
            return;
        }
		// if we have open brackets left
        if (open > 0){
            output.push_back('(');
            generate(open-1, close, output, ans);
			// backtracking
            output.pop_back();
        }
		// add a closing bracket if and only if we have used more opening brackets
        if (close > open){
            output.push_back(')');
            generate(open, close-1, output, ans);
            output.pop_back();
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        string output = "";
        vector<string> ans;
        generate(n, n, output, ans);
        return ans;
    }
};
