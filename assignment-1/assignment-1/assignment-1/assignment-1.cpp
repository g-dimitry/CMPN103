#include <iostream>
using namespace std;

float MeanOfEvenValueOddIndex(int elements[], int elementCount) {
 if (elementCount < 2) {
  return 0;
 }
 int sum = 0;
 int count = 0;
 for (int i = 1; i < elementCount; i += 2) {
  int element = elements[i];
  if (element % 2 == 0) {
   sum += element;
   count++;
  }
 }
 if (count == 0) {
  return 0;
 }
 return float(sum) / count;
}

float GetAbsoluteValue(float *element) {
 if (*element < 0) {
  *element = abs(*element);
  return true;
 }
 return false;
}

int main()
{
 cout << "Welcome to PT assignment\n";
 cout << "Please input operation character, m for mean or a for absolute\n";
 char operation;
 cin >> operation;
 if (operation == 'm') {
  cout << "You have chosen to get the mean\n";
  int elements[6];
  cout << "Please enter the required values\n";
  for (int i = 0; i < 6; i++) {
   cin >> elements[i];
  }
  float mean = MeanOfEvenValueOddIndex(elements, 6);
  cout << "The mean is " << mean << "\n";
 }
 else if (operation == 'a') {
  cout << "You have chosen to get the absolute value\n";
  cout << "Please enter the required value x\n";
  float x = 0;
  cin >> x;
  bool isChanged = GetAbsoluteValue(&x);
  cout << "The absolute value is " << x << ". It is " << (isChanged ? "changed" : "unchanged") << "\n";
 }
 else {
  cout << "Invalid Input\n";
 }
 cout << "Program ended\n";
}
