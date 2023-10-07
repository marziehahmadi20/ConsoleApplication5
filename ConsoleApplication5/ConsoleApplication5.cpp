// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{//marzieh ahmadi
    double riazi[10], fizik[10], moadel[10];
    int i;
    for (i = 0; i <= 9; i++)
    {
        cout << "riazi[" << i << "]=";
        cin >> riazi[i];
    }
    for (i = 0; i <= 9; i++)
    {
        cout << "fizik[" << i << "]=";
        cin >> fizik[i];
    }
    for (i = 0; i <= 9; i++)
    {
        moadel[i] =( riazi[i] + fizik[i])/2;
        cout << "moadel[" << i << "]=" << moadel[i] << endl;
    }
    for (i = 0; i <= 9; i++) {
        if (moadel[i] > 12)
        {
            cout << "moadel[" << i << "]=" <<"pass"<<endl;
        }
        else
        {
            cout << "moadel[" << i << "]=" <<"not pass"<<endl;
        }
    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
