#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    char ch;
    fin.get(ch);
    while (!fin.eof())
	{
    	if (!isspace((unsigned char)ch))
        		fout.put(ch);
fin.get(ch);
	}
    fin.close();
    fout.close();
    cout << "White spaces removed successfully.";
    return 0;
}
