#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> result;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};

int main() 
{
    Solution solution;
    vector<int>nums;
    int n;
    cout << "enter size of vec: ";
    cin >> n; //number of elements in the vector
    int target;
    cout << "enter target: ";
    cin >> target;
    cout << "enter elements: ";
    for(int i = 0; i < n; i ++)
    {
        int element;
        cin >> element;
        nums.push_back(element);
    }

   vector<int> indices = solution.twoSum(nums, target);
   for(int index : indices){
    cout<<index << " , ";
   }
   cout << endl;


}
