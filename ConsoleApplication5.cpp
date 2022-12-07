
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
    char alph[] = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЬЭЮЯ";
    char* exp = new char[34];
    for (int i = 0; i < 33; ++i)
    {
        exp[i] = *(alph + i);
    }
    for (int i = 0; i < sizeof(alph); i++)
    {
        cout << exp[i];
    }
    int startindex = 30;
    int count = 2;
    remove(exp, &startindex, &count);
    cout << endl;
    for (int i = 0; i < sizeof(alph); i++)
    {
        cout << exp[i];
    }
    delete[] exp;
    return 0;
}
