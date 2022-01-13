//Лабораторная 18 (ВВП)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    cout << "Введите длину (N)\n";
    try
    {
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            string* C = new string[stoi(N)];

            //ввод A
            string* A = new string[stoi(N)];
            cout << "Введите элемент  A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            //ввод B
            string* B = new string[stoi(N)];
            cout << "Введите элемент  B:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> B[i];
            }

            //процесс изменения 
            for (int i = 0; i < stoi(N); i++) {
                C[i] = B[i];
                B[i] = A[i];
                A[i] = C[i];
            }

            //Вывод
            cout << "\nНовые элементы A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << A[i] << endl;
            }
            cout << "Новые элементы B:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << B[i] << endl;
            }

            delete[] C;
            delete[] B;
            delete[] A;
        }
        else
        {
            cout << "\nНеверные данные\n\n";
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nНеверные данные\n\n";
    }
}
void Second()
{
    cout << "Введите длину A (N):\n";
    try
    {
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            double* C = new double[stoi(N)];

            //ввод A
            string* A = new string[stoi(N)];
            cout << "Введите элементы A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            //создание С
            C[0] = stod(A[0]);
            for (int i = 1; i < stoi(N); i++) {
                C[i] = C[i - 1] + stod(A[i]);
            }

            //создание B 
            double* B = new double[stoi(N)];
            for (int i = 0; i < stoi(N); i++) {
                B[i] = C[i] / (i + 1);
            }

            //вывод
            cout << "\nЭлементы С:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << C[i] << endl;
            }
            cout << "\nЭлементы B:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << B[i] << endl;
            }

            delete[] C;
            delete[] B;
            delete[] A;
        }
        else
        {
            cout << "\nНеверные данные\n\n";
        }

    }
    catch (std::invalid_argument e)
    {
        cout << "\nНеверные данные\n\n";
    }

}
void Third()
{
    int Res;
    cout << "Введите длину А (N:\n";
    try
    {
        string N;
        cin >> N;
        if (stoi(N) > 1)
        {
            double* C = new double[stoi(N)];

            //ввод A
            string* A = new string[stoi(N)];
            cout << "Введите элементы A:\n";
            for (int i = 0; i < stoi(N); i++) {
                cin >> A[i];
            }

            double last = 0;
            for (int i = 0; i < stoi(N); i++) {
                if (stoi(A[i]) % 2 == 1) {
                    last = stoi(A[i]);
                }
            }
            //создание B
            int* B = new int[stoi(N)];
            for (int i = 0; i < stoi(N); i++) {
                if (stoi(A[i]) % 2 == 1) {
                    B[i] = stoi(A[i]) + last;
                }
                else {
                    B[i] = stoi(A[i]);
                }
            }


            //вывод
            cout << "\nЭлементы B:\n";
            for (int i = 0; i < stoi(N); i++) {
                cout << B[i] << endl;
            }

            delete[] C;
            delete[] B;
            delete[] A;
        }
        else
        {
            cout << "\nНеверные данные\n\n";
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nНеверные данные\n\n";
    }
}
void Fourth()
{
    try
    {
        int N, ma = -10000, maxind = 0, mini = 100000, minind = 0;
        cout << "Введите длину A (N):\n";
        cin >> N;
        double* A = new double[N];
        double* F = new double[N];
        if (N > 1)
        {
            cout << "Введите элементы A:\n";
            for (int i = 0; i < N; i++)
            {
                cin >> A[i];
            }
            cout << endl;
            for (int i = 0; i < N; i++)
            {
                F[i] = A[i];
            }
            for (int i = 0; i < N; i++)
            {
                if (ma < A[i])
                {
                    ma = A[i];
                    maxind = i;
                }
            }
            for (int i = 0; i < N; i++)
            {
                if (mini > A[i])
                {
                    mini = A[i];
                    minind = i;
                }
            }
            for (int i = 0; i < N; i++)
            {
                A[i] = 0;
            }
            if (minind >= maxind)
            {
                int g = maxind;
                maxind = minind;
                minind = g;
            }
            for (int i = 0; i <= minind; i++)
            {
                A[i] = F[i];
            }
            for (int i = maxind; i < N; i++)
            {
                A[i] = F[i];
            }
            for (int i = 0; i < N; i++)
            {
                cout << A[i] << endl;
            }
        }
        else
        {
            cout << "Неверные данные\n";
        }
        delete[] A;
        delete[] F;
    }
    catch (std::invalid_argument e)
    {
        cout << "\nНеверные данные\n\n";
    }
}
void Fifth()
{
    string N;
    cout << "Введите длину A (N)\n";
    cin >> N;
    if (stoi(N) > 1)
    {

        //Введите A
        string* A = new string[stoi(N)];
        cout << "Введите элементы A:\n";
        for (int i = 0; i < stoi(N); i++) {
            cin >> A[i];
        }

        int I = rand() % stoi(N);
        cout << "\nНовое место первого элемента: " << I + 1;

        //копирование А в Б

        double* B = new double[stoi(N)];
        for (int i = 0; i < I; i++) {
            B[i] = stoi(A[i + 1]);
        }
        B[I] = stod(A[0]);
        for (int i = I + 1; i < stoi(N); i++) {
            B[i] = stoi(A[i]);
        }

        //Впишите B
        cout << "\nНовый массив:\n";
        for (int i = 0; i < stoi(N); i++) {
            cout << B[i] << endl;
        }

        //Сортировка B
        for (int i = 0; i < stoi(N) - 1; i++) {
            for (int j = 0; j < stoi(N) - 1; j++) {
                if (B[j] > B[j + 1]) {
                    //переворот пар
                    double a = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = a;
                }
            }
        }
        //Вывод
        cout << "\nОтсортированный массив: \n";
        for (int i = 0; i < stoi(N); i++) {
            cout << B[i] << endl;
        }
    }
}

void Error()
{
    cout << "Неверный номер\n" << endl;
}

int main()
{
    while (true) {
        int ExNum;
        cout << "  Выберите номер задания (введите 0 для выхода))\n"
            << "   1) Даны массивы A и B одинакового размера N. Поменять местами их содержимое и вывести вначале элементы преобразованного массива A, а затем — элементы преобразованного массива B.\n"
            << "   2) Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу: элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K.\n"
            << "   3) Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве, на исходное значение последнего нечетного числа. Если нечетные числа в массиве отсутствуют, то оставить массив без изменений\n"
            << "   4) Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы).\n"
            << "   5) Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию. Сделать массив упорядоченным, переместив первый элемент на новую позицию.\n";
        cin >> ExNum;
        if (ExNum == 1)
        {
            First();
        }
        else if (ExNum == 2)
        {
            Second();
        }
        else if (ExNum == 3)
        {
            Third();
        }
        else if (ExNum == 4)
        {
            Fourth();
        }
        else if (ExNum == 5)
        {
            Fifth();
        }
        else if (ExNum == 0)
        {
            break;
        }
        else
        {
            Error();
        }

    }
    return 0;
}
