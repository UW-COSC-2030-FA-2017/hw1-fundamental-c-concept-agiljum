//Ana Giljum
//24.9.2017
//COSC2030
//HW 1 Part 2

#include<iostream>
#include "Collection.h"
using std::cout;
using std::endl;
using namespace::std;


int main()
{
	Collection<int> object;

	//Tests the .isEmpty() and .makeEmpty() functions
	cout << "Is Collection empty? ";
	if (object.isEmpty() == true)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	object.makeEmpty();
	cout << "Is Collection empty? ";
	if (object.isEmpty() == true)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	//Tests .insert(), .remove(), and .notContained() functions
	object.insert(7);
	cout << "Is there a 7 in Collection? ";
	if (object.notContained(7) == true)
	{
		cout << "No" << endl;
	}
	if (object.notContained(7) == false)
	{
		cout << "Yes" << endl;
	}
	object.remove(7);
	cout << "Is there a 7 in Collection? ";
	if (object.notContained(7) == true)
	{
		cout << "No" << endl;
	}
	if (object.notContained(7) == false)
	{
		cout << "Yes" << endl;
	}

	//Tests .removeRandom() for both size=1 and size>1
	object.makeEmpty();
	object.insert(1);
	object.removeRandom();
	cout << "Collection empty after removing random? ";
	if (object.isEmpty() == true)
	{
		cout << "Yes" << endl;
	}
	if (object.isEmpty() == false)
	{
		cout << "No" << endl;
	}
	object.makeEmpty();
	object.insert(1);
	object.insert(2);
	object.removeRandom();
	cout << "Collection empty after removing random? ";
	if (object.isEmpty() == true)
	{
		cout << "Yes" << endl;
	}
	if (object.isEmpty() == false)
	{
		cout << "No" << endl;
	}

	return 0;
}
