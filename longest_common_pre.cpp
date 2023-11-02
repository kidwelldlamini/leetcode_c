#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {

        int n = strs.size();
        if(n==0)
        {
            return "";
        }

        string longestCommon = "";
        sort(begin(strs), end(strs));
        string a = strs[0];
        string b = strs[n-1];

        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                longestCommon = longestCommon + a[i];
            }
            else
            {
                return longestCommon;
                 break;
            }
                 
        }
        return longestCommon;   
    }
};
int main()
{
    Solution solution;
    vector<string>strs;
    int size;
    cout << "Enter size of the vector: ";
    cin >> size;
    cin.ignore(); // Clear newline character after reading size
    for(int i = 0; i < size; i++)
        {
            string str;
            getline(cin, str);
            strs.push_back(str);
        }


   string longestCommon = solution.longestCommonPrefix(strs);
   cout << "longest common prefix: "<< longestCommon <<endl;
}