

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char line[80] = { 0x5A, 0x3F, 0x33, 0x3D, 0x40, 0x6B, 0x4C,0x58, 0x72, 0x4E, 0x2F };
    ofstream outfile("bin_write.hex", ios::out | ios::binary);

    if (!outfile)
    {
        cerr << "cannot create file";
    }
    int i = 0;
    while (line[i])
    {
        outfile.put(line[i]);
        i++;
    }
    outfile.close();

}

