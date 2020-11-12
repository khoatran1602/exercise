
#include <iostream>
#include <fstream>

using namespace std;

bool is_float(const char *val)
{
	int i = 0;
	int dot_counter = 0;
	if (val[0] == '+' || val[0] == '0') i++;
	while (val[i] != '\0'){
		if (val[i] == '.'){
			dot_counter++;
			if (dot_counter > 1)
			return false;
		}
		else if (val[i] < '0' || val[i] > '9')
			return false;
		i++;
	}
	return true;
}

int main(int argc, char* argv[])
{
	// cerr can be redirected 
	streambuf* cerrbuf = cerr.rdbuf();	// Pointer which points to the output error stream
	ofstream errorout("error.txt");		// Declaring and initializing an output filestream
	cerr.rdbuf(errorout.rdbuf());		// Redirecting cerr to the output filestream created above

	for (int i = 1; i < 10; i++)
	{
		string input;
		cout << "enter float number:" << endl;
		cin >> input;
		//if (!isInteger_pointer(argv[i]))
		//if (!isInteger_loop(argv[i]))
		if (!is_float(input.c_str()))
		{
			cerr<< input << " is a invalid integer format" << endl;
		}
		else
		{
			cout << input << " is a valid float format" << endl;
		}
	}
	cerr.rdbuf(cerrbuf);	// Redirecting cerr back to the console
	cerr << "This is an output error stream which should be seen at the console" << endl;

	return 0;
}