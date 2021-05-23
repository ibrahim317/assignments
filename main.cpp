#include <iostream>
#include <string>
#include <fstream>
#include <experimental/filesystem>
using namespace std;

namespace fs = std::experimental::filesystem;
int main()
{
    ifstream infile;
    ofstream outfile;
    string spath;
    string tpath;
    cout << "inter the source file path strat from the root /: ";
    cin >> spath;
    infile.open(spath);
    while (infile.fail())
    {
        cout << "can't find the file in the path that you intered please cheak the name\n";
        cout << "inter the source file path strat from the root /: ";
        cin >> spath;
        infile.open(spath);
    }
    cout << "inter the target file path (strat from the root /): ";
    cin >> tpath;
    outfile.open(tpath);

    string contant;
    for (int i = 0; infile.eof() != true; i++)
    {
        contant += infile.get();
    }
    outfile << contant;
    return 0;
}
