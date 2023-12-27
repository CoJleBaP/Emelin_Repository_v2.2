// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int EnterNumberA(int a)
{
    return 0;
}

int EnterNumberB(int b)
{
    cout << "Enter B - ";
    cin >> b;
    return b;
}



void OST(int a, int b)
{
    
}

void DEL(int a, int b)
{
    
}


int main()
{
    cout << "Press 1 to enter A " << endl;
    cout << "Press 2 to enter B " << endl;
    cout << "Press 3 to have A%B " << endl;
    cout << "Press 4 to have B/A " << endl;
    cout << "Press 0 for end " << endl;
    int N, a = 0, b = 0, c = 0;
    cin >> N;

    while (1)
    {
        switch (N)
        {
        case 1:
            a = EnterNumberA(a);
            cout << "enter the job number - ";
            cin >> N;
            continue;
        case 2:
            b = EnterNumberB(b);
            cout << "enter the job number - ";
            cin >> N;
            continue;
        case 3:
            OST(a,b);
            continue;
        case 4:
            DEL(a,b);
            continue;
        default:
            cout << "Programm is finished";
            return 0;
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
