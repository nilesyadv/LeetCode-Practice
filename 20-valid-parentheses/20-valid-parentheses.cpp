class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') stack.push(s[i]);
            else
            {
                if(stack.size() == 0 || (stack.top() == '(' && s[i] != ')') || (stack.top() == '{' && s[i] != '}') || (stack.top() == '[' && s[i] != ']')) return false;
                stack.pop();
            }
        }
        return !stack.size();
    }
};