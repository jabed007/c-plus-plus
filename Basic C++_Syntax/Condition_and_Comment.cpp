#include <bits/stdc++.h>
using namespace std;

int main()
{
  double cgpa;
  cout << "Enter your cgpa: "
       << "\n";
  cin >> cgpa;

  if (cgpa >= 3.75)
  {
    cout << "Your grade is A"
         << "\n";
  }
  else
  {
    cout << "Your grade is not A"
         << "\n";
  }

  return 0;
}