

#include <iostream>
#include <fstream>

using namespace std;

void insertion()
{
    char chararray[] = { 0x5A, 0x3F, 0x33, 0x3D, 0x40, 0x6B, 0x4C,0x58, 0x72, 0x4E, 0x2F };
    int integerarray[] = { 23, 36, 10, 00, 127, 256, 873, 365, 1024, 3425, 5096, 231, 943 };
    double doublearray[] = { 34.25, 9e15, 3e-09, 935.23, -634.23, 345.92, -254.76, 8.9e5, 436.34e10 };

    ofstream output("insertion.hex", ios::out | ios::binary); //make new stream
    if (!output)
    {
        cerr << "cannot create file";
    }
    //output << chararray << endl;
    //output << integerarray << endl;
    for (int i = 0; chararray != '\0'; i++)
    {
        output << chararray[i] << endl;
    }
    for (int i = 0; i <= sizeof(integerarray); i++)
    {
        output << integerarray[i] << endl;
    }
    for (int i = 0; i <= sizeof(doublearray); i++)
    {
        output << doublearray[i] << endl;
    }
    output.close();
}


int main()
{
    insertion();

    return 0;
}

