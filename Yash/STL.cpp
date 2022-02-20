#include <iostream>
#include <array> //library for stl array implementation
using namespace std;
int main()
{

	array<int, 4> a = {1, 2, 3, 4};
	int size = a.size();
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
}