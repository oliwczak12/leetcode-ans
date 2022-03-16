#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> v = {1,5,3};

bool canMakeArithmeticProgression(vector<int>& arr) {
        int x;
        sort(arr.begin(),arr.end());
        x= arr[1]-arr[0];
        for (int i = 0; i < arr.size()-1; i++) {
          if((arr[i+1]-arr[i])!=x)
          return false;
        }
        return true;
}

int main() {
  cout<< canMakeArithmeticProgression(v);
  return 0;
}
