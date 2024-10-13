#include<iostream>
using namespace std;
int main();
{
	int side1, side, max1, max2, max3, i = 0, left, right;
cout << "Enter the side 1 of the triangle: ";
cin >> side1;
cout << "Enter the side 2 of the triangle: ";
cin >> side2;
cout << "Enter the side 3 of the triangle: ";
cin >> side3;
if (side1 > side2)
{
	if (side1 > side3)
	{
		max1 = side1;
		left = (side1 * side1);
		right = (side2 * side2) + (side3 * side3);
		if (left == right) {
			cout << "It is right triangle\n\n\n";
		}
	}
	else
	{
		max1 = side3;
		left = (side3 * side3);
		right = (side1 * side1) + (side2 * side2);
		if (left == right) {
			cout << "It is right triangle\n\n\n";
		}
	}
	}
else
{
	max1 = side3;
	max1 = side1;
	left = (side2 * side2);
	right = (side1 * side1) + (side3 * side3);
	if (left == right) {
		cout << "It is right triangle\n\n\n";
	}
}
system("pause");
return 0;

}