// 3KLSC-MISAEL LOPEZ-01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
using namespace std;
const int NUM = 8;
int main()
{
    int nums[NUM];
    int total = 0;
    for (int i = 0; i < NUM; i++) {
        cout << "Ingrese el numero: ";
        cin >> nums[i];
        total = total + nums[i];
    }
    cout << "el resultado es" << total << endl;
    system("pause");
    return 0;
}