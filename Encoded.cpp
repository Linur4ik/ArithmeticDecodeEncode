#include "Header.h"

int main()
{
    ifstream In("Text.txt", ios::binary);
    if (!In.is_open())
    {
        cout << "error";
        return 0;
    }
    ofstream Out("Encoded.txt", ios::binary);
    if (!In.is_open())
    {
        cout << "error";
    }
    Arithmetic a(3);
    a.CreateMap(In);
    a.WriteCap(Out);
    a.Encoded(In,Out);
    //a.PrintMap();
	return 0;
}
