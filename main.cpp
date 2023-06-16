#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int counter = 0;
    int leng;
    char symb;
    int orientathon;

    cout << "Input symbol  -> ";
    cin >> symb;
    cout << "Input lengths -> ";
    cin >> leng;
    cout << "Input orientathion:" << endl
         << "\t1. gorizont " << endl
         << "\t2. vertical " << endl
         << "\t->";
    cin >> orientathon;

    switch (orientathon)
    {
    case 1:
    {
        while (counter != leng)
        {
            cout << symb;
            counter += 1;
        }
        break;
    }

    case 2:
    {
        while (counter != leng)
        {
            cout << symb << endl;
            counter += 1;
        }
        break;
    }

    default:
    {
        cout << "Error!";
        break;
    }
    }
}