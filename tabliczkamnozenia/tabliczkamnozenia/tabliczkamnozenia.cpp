#include <iostream>
using namespace std;

int main()
{
	/*for (int i = 1; i < 11; i++)
	{
		if (i == 1) cout.width(5);
		for (int j = 1; j < 11; j++)
		{
			
		}
		cout.width(5);  cout << endl;
	}*/
	int i = 1;

	/*while (i <= 10)
	{
		if (i == 1) cout.width(5);
		int j = 1;
		while (j <= 10)
		{ 
		cout.width(5);  cout << i * j;
		j++;	
		}
		cout.width(5);  cout << endl;
		i++;
	}*/
	do
	{
		if (i == 1) cout.width(5);
		int j = 1;
		while (j <= 10)
		{
			cout.width(5);  cout << i * j;
			j++;
		}
		cout.width(5);  cout << endl;
		i++;
	} while (i <= 10);

    return 0;
}