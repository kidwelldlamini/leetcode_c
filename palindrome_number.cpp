#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) 
    {
        //convert the int to string
        string num = to_string(x);

        //reverse the string and compare with the original string
        string str = num;
        reverse(str.begin(), str.end());
    

        bool flag = true;

        if(str == num)
        {
            return flag;
        }
        else
        {
            flag = false;
            return flag;
        }
       

    }
    
};
int main() {
    Solution solution;
    
    int x;
    cout << "Enter integer: ";
    cin >> x;

    if (solution.isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }
    
    return 0;
}
