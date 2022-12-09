
#include <iostream>
#include <locale>

using namespace std;

void remove(char* exp, int* startindex, int* count)
{
    for (int i = *startindex; i < *count + *startindex; i++)
    {
        exp[i] = ' ';
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int startindex;
    int count;
    const unsigned short int size = 100;
    char* exp = new char[size];
    cin >> exp >> startindex >> count;
    while (startindex > size || count > (size - startindex))
    {
        startindex = 0;
        count = 0;
        cin >> startindex >> count;
    }
    remove(exp, &startindex, &count);
    cout << endl;
    cout << exp;
    delete[] exp;
    return 0;
}
