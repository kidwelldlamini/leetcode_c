#include <iostream>
#include <string>
#include <stack>

using namespace std;
class Solution {
public:
    bool isValid(string s)
    {
        bool Valid = true;
        for(int i = 0; i < s.length(); i ++)
        {
            char c = s[i];
            if(c != '(' && c != ')' && c != '[' && c != ']' && c != '{' &&  c != '}')
            {
                Valid = false;
                cout << "Inavlid string" << endl;
                break;
            }
        }
        //checking for validality
        stack<char>paranthesis;
        for (int i = 0; i < s.length(); i++) {
    char ch = s[i];
    if (ch == '(' || ch == '{' || ch == '[') {
        paranthesis.push(ch);
    } else {
        if (paranthesis.empty()) {
            return false;
        }
        char top = paranthesis.top();
        
        if ((top == '(' && ch != ')') || (top == '{' && ch != '}') || (top == '[' && ch != ']')) {
            return false; // Only return false if the conditions are not satisfied
        }
        paranthesis.pop();
    }
}

        if(paranthesis.empty())
            {
                return true;
            }
            return false;
    }
};
int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    Solution solution;
    if(solution.isValid(s))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

}