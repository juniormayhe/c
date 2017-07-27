//https://courses.edx.org/courses/course-v1:Microsoft+DEV210.2x+3T2016/courseware/ebe558b31dd14a46a15040bd355ff9f9/44fc0e289c194196a0d0dd1fe9fc2374/
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	int num = 3;
	int *pNum = &num;

	cout << "num variable is: " << num << endl;
	cout << "Address of num variable is: " << pNum << endl;
	cout << "Value by dereferencing address: " << *pNum << endl;


	//pause...
	printf("\n\nPress any key to continue...");
	
	string str;
	getline(cin, str);
	return 0;
}