#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int x;
ifstream infile;
ofstream outfile;
string spath;
string tpath;

void line()
{
    for (int i = 0; i < 80; i++)
    {
        cout << "-";
    }
}
void list()
{
    cout << "\n\nType 1 to encrypt your file \nType 2 to decrypt your file \nType 3 to exit\n";
    for (int i = 0; i < 80; i++)
    {
        cout << "-";
    }
    cout << "\n Enter your choose :  ";
    cin >> x;
}
void decrypt()
{
    string contant;
    for (int i = 0; infile.eof() != true; i++)
    {
        contant += infile.get() - '*';
    }
    outfile << contant;
}
void encrypt()
{
    string contant;
    for (int i = 0; infile.eof() != true; i++)
    {
        contant += infile.get() + '*';
    }
    outfile << contant;
}
void openError()
{
    while (infile.fail())
    {
        cout << "can't find the file in the path that you intered please cheak the name";
        cout << "\n inter the path of the file that you want to encrypt : ";
        cin >> spath;
        infile.open(spath);
    }
}
void openFiles()
{
    cout << "\n inter the path of the file that you want to work with : ";
    cin >> spath;
    infile.open(spath);
    openError();
    cout << "\n inter the path of the target file : ";
    cin >> tpath;
    outfile.open(tpath);
}
