#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int province = 3;
	const int days = 7;
    int temp[province][days];
	char x; 
	
    cout << "Enter the temperature for a week of Province A, Province B, and Province C." << endl;

    for(int i = 0; i < province; ++i)
    {
        for(int a = 0; a < days; ++a)
        {
		if (i == 0) x = 'A';
		else if (i == 1) x = 'B';
		else x = 'C';
        cout << "Province " << x << ", Day " << a + 1 << " : ";
        cin >> temp[i][a];
        }
    }

    cout << "\nDisplaying Values:" << endl;

    for(int i = 0; i < province; ++i)
    {
        for(int a = 0; a < days; ++a)
        {
		if (i == 0) x = 'A';
		else if (i == 1) x = 'B';
		else x = 'C';
        cout << "Province " << x << ", Day " << a + 1 << " = " << temp[i][a] << endl;
        }
    }

    return 0;
}
