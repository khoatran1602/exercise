//#include <iostream>
//#include <cstring>
//#include <math.h>  
//using namespace std;
//
//int main(int argc , char* argv[])
//{
//	double base = 0;
//	for (int i = 1; i < argc; i++)
//	{
//		cout << "Argument: " << argv[i] << endl;
//
//		if (strlen(argv[i]) > 8)
//			return 1;
//
//		for (int j = 0; j < strlen(argv[i]); j++)
//		{
//			if (argv[i][j] != '1' && argv[i][j] != '0')
//			{
//				return 1;
//			}
//			double power = pow(2, strlen(argv[i]) - j - 1);
//			//cout << power << endl;
//			double base = base + power;
//			if(j == strlen(argv[i]) - 1)
//				cout << "base: " << base << endl;
//		}
//		
//	}
//	cout << "sucess" << endl;
//	return 0;
//}
#include <iostream>
#include <cstring>
#include <math.h>  
using namespace std;

int main(int argc, char* argv[])
{
	double base = 0;
	if (argc != 3)
	{
		cout << " Invalied argument" << endl;
		return 1;
	}
	for (int i = 1; i < argc; i++)
	{
		cout << "Argument: " << argv[i] << endl;

		if (strlen(argv[i]) != 8)
			return 1;

		for (int j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] != '1' && argv[i][j] != '0')
			{
				cout << "Invalied 8bit binary number" << endl;
				return 1;
			}
			
		}
		cout << "Valid 8bit binary number  0b" << argv[i] << endl;

	}
	
	return 0;
}