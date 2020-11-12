#include <iostream>
using namespace std;

void PositiveEvens(int ArrX[], int count, int* ArrY, int* newCount);
bool isEvenAndPositive(int element);
void printIntArray(int element[], int count) {
 for (int i = 0; i < count; i++) {
  cout << element[i] << " ";
 }
}

int main()
{
 int size = 0;
 while (1) {
  int input;
  cout << "Please enter elements count: ";
  cin >> input;
  if (!cin.good()) {
   cout << "Invalid elements count. Cause: must be an integer.\n";
   cin.clear();
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   continue;
  }
  if (input <= 0) {
   cout << "Invalid elements count. Cause: must be bigger than 0.\n";
   continue;
  }
  size = input;
  break;
 }
 int* ArrX = new int[size];
 for (int i = 0; i < size; i++) {
  while (1) {
   int input;
   cout << "Please enter element " << i << ":";
   cin >> input;
   if (!cin.good()) {
	cout << "Invalid element. Cause: must be an integer.\n";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	continue;
   }
   ArrX[i] = input;
   break;
  }
 }
 int* ArrY = new int;
 int newCount = 0;
 PositiveEvens(ArrX, size, ArrY, &newCount);
 cout << "ArrY = ";
 printIntArray(ArrY, newCount);
}

template<typename Type>
void clone(Type* inArr, int size, Type* outArr)
{
 for (int i = 0; i < size; i++) {
  outArr[i] = inArr[i];
 }
}

template<typename Type>
void add(Type* inArr, int size, Type element, Type* _outArr)
{
 clone(inArr, size, _outArr);
 _outArr[size] = element;
 inArr = _outArr;
}

template<typename Type>
void filter(Type* inArr, int size, bool (*f)(Type), Type* outArr, int* newCount)
{
 int _size = 0;
 for (int i = 0; i < size; i++) {
  if (f(inArr[i])) {
   add(outArr, _size, inArr[i], outArr);
   _size++;
  }
 }
 *newCount = _size;
}

void PositiveEvens(int ArrX[], int count, int* ArrY, int* newCount) {
 filter(ArrX, count, isEvenAndPositive, ArrY, newCount);
}

bool isEvenAndPositive(int element) {
 return (element % 2 == 0) && element > 0;
}
