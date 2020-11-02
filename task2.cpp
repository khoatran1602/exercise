#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		cout << "wrong number of user inputs" << endl;
		return 1;
	}
	for (int i = 1; i < argc; i++)
	{
		if (strlen(argv[i]) != 8)
		{
			cout << "input " << argv[i] << " is not a 8-bit binary" << endl;
			return 1;
		}
		for (int j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] != '0' && argv[i][j] != '1')
			{
				cout << "input " << argv[i] << " is not a valid binary" << endl;
				return 1;
			}
		}
		cout << "valid 8-bit binary number 0b" << argv[i] << endl;
	}
	return 0;
}