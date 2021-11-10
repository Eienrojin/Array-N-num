//16. Дана последовательность из N чисел. найти, сколько среди них отличных от последнего числа
// Допустим N = 9

#include <iostream>
#include <array>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int testArray [21] = { 76,5,2,5,2,7,34,4,5,2,7,4,2,4,7,5,2,3,5,3,5 };
    int lastArrayNum = testArray[8];
    int nNumMatch = 0;
    cout << "Последний элемент массива: " << testArray[8] << endl;

    for (int i = 0; i < 21; i++)
    {
        if (testArray[i] != lastArrayNum)
        {
            nNumMatch += 1;
        }
    }

    cout << "Чисел, не совпадающих с последним числом : " << nNumMatch;
}