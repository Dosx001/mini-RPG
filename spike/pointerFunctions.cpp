#include <iostream>
#include <vector>
using namespace std;

void PrintValue(int value) {
  cout << value << '\n';
}

void PrintValueList(int value) {
  cout << value << ", ";
}

int sum = 0;
void Sum(int value) {
  sum += value;
  cout << sum << ", ";
}

void ForEach(const vector<int>& values, void(*func)(int)) {
  for (int value : values) {
    func(value);
  }
}

int prod = 1;
int main() {
  vector<int> values = {1, 5, 4, 2, 3};
  ForEach(values,PrintValue);
  ForEach(values,PrintValueList);
  cout << '\n';
  ForEach(values,Sum);
  cout << '\n';
  ForEach(values, [](int value) {
    prod*=value;
    cout<<prod<<", ";
  });
  return 0;
}