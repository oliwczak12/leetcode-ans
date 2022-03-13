//Subtract the Product and Sum of Digits of an Integer
#include <iostream>

using namespace std;

    int subtractProductAndSum(int n) {
      int sum;
      int ilo=1;
      while (n != 0) {
        sum += n % 10;
        ilo = ilo* (n % 10);
        n = n / 10;
      }

      return ilo-sum;
    }
int main()
{
cout << subtractProductAndSum(4421) << endl;
}
