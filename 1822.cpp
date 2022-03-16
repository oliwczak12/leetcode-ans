#include <iostream>
#include <vector>

using namespace std;

std::vector<int> v = {9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24};

int arraySign(vector<int>& nums) {
int x=0;
  for (int i = 0; i < nums.size(); i++) {
    if(nums[i]==0)
    return 0;
    if(nums[i]<0)
    x++;
  }
  if(x % 2==0)
    return 1;
  return -1;
}

int main() {
  std::cout<<arraySign(v);
  return 0;
}
