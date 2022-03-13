// @todo optymalizacja do jednej pętli 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> v={{1,2},{3,1},{2,4},{2,3},{4,4}};

int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
vector<int> indexy;
int min_idx;
int min=10001;
int man_val;
  for (int i = 0; i < points.size(); i++) {
    if(points[i][0]==x||points[i][1]==y){
      indexy.push_back(i);
    }
  }
  if(indexy.size()==0){
    return -1;
  }
for (int i = 0; i < indexy.size(); i++) {
  man_val=abs(x-points[indexy[i]][0])+abs(y-points[indexy[i]][1]);
    if(man_val<min){
      min = man_val;
      min_idx = indexy[i];
    }
}
return min_idx;
}

int main()
{
  //for (int i: nearestValidPoint(1,4,v))
    std::cout << nearestValidPoint(8,8,v) << ' ';
return 0;
}
