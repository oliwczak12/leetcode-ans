#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
std::vector<int> v = {1,2,1};

int largestPerimeter(vector<int>& nums) {
  int sum=0;
  sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size()-2; i++) {
      if(nums[i]+nums[i+1]>nums[i+2]){
        sum = max(sum,nums[i]+nums[i+1]+nums[i+2]);
      }
    }
    return sum;
  }


int main() {
  cout << largestPerimeter(v) << '\n';
  return 0;
}
