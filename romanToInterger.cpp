#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> 
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) 
    {
         map<char, int> romanNumeral;
        romanNumeral['I'] = 1;
        romanNumeral['V'] = 5;
        romanNumeral['X'] = 10;
        romanNumeral['L'] = 50;
        romanNumeral['C'] = 100;
        romanNumeral['D'] = 500;
        romanNumeral['M'] = 1000;
        //check if entered string is CAPS only
        bool Invalid = false;
    
      for (int i = 0; i < s.length(); ++i) {
    if (!isupper(s[i])) {
        Invalid = true;
        break;
    }
}
        if(Invalid)
        {
            cout <<"Invalid string. Please enter CAPS only string: ";
            return 0;
        }
        int result = 0;
        int prev_value = 0;

        for(int i = s.length() - 1; i >= 0; i--)
        {
            int cur_value = romanNumeral[s[i]];
            if(cur_value >= prev_value)
            {
                result += cur_value;
            }else{
                result -= cur_value;
            }
            prev_value = cur_value;
        }
        cout << result << endl;
        return result;
    }
};
int main()
{
    Solution romanNumerals;

    string str;
    cout << "Enter the Roman numeral: ";
    cin >> str;

    romanNumerals.romanToInt(str);
}