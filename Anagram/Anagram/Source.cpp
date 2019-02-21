#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/// <summary>
/// Check if one string is an anagram of another.
/// </summary>

bool anagram_checker(string a, string b)
{
	if (a.length() == 0 || b.length() == 0)
		return false;

	int length_a = a.length();
	int length_b = b.length();

	if (length_a != length_b)
	{
		return false;
	}

	char * array_1 = &a[0];
	char * array_2 = &b[0];

	sort(array_1, array_1 + length_a);
	sort(array_2, array_2 + length_b);

	a = array_1;
	b = array_2;

	if (a == b)
		return true;

	return false;
}

int main()
{
	string a, b;

	cout << "Input your first word :" << endl;
	cin >> a;
	cout << endl << endl;

	cout << "Input your second word :" << endl;
	cin >> b;
	cout << endl << endl;

	cout << "Is " << b << " an anagram of " << a << " ?" << endl;
	cout << boolalpha << anagram_checker(a, b) << endl;

	system("Pause");
	return 0;
}