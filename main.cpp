#include <cmath>
#include <iostream>

using namespace std;

double f_for(double x)
{
  double S1 = 0;
  for (int k = 1; k <= 9; k++)
    S1 +=log(x+1)/pow(x+k,k);
  return S1;
}
double f_while(double x) {
  double S2 = 0;
  int k = 1;
  while (k <= 9) {
    S2 += log(x+1)/pow(x+k,k);
    k++;
  }
  return S2;
}
double f_dowhile(double x) {
  double S3 = 0;
  int k = 1;
  do {
    S3 += log(x+1)/pow(x+k,k);
    k++;
  } while (k <= 9);
  return S3;
}
int main() {
  double x, S1, S2, S3;
  cout << " Ввести х = ";
  cin >> x;
  S1 = f_for(x);
  S2 = f_while(x);
  S3 = f_dowhile(x);
  cout << "for S = " << S1 << endl;
  cout << "while S = " << S2 << endl;
  cout << "do-while S = " << S3 << endl;
  return 0;
}