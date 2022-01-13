//Лабораторная 17 (ВВП)

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    try
    {
        string N, K, L;
        cout << " Введите массив A (N)\n";
        cin >> N;
        cout << "Введите K\n";
        cin >> K;
        cout << "Введите L\n";
        cin >> L;
        if ((stoi(N) > 1) and (stoi(K) < stoi(L)) and (stoi(L) < stoi(N)) and (stoi(K) >= 0))
        {
            //Ввод A
            string* A = new string[stoi(N)];
            cout << "Введите число A:\n";
            for (int i = 0; i < stoi(N); i++) 
            {
                cin >> A[i];
            }

            //поиск...
            double sum = 0;
            int num = 0;
            for (int i = stoi(K) - 1; i <= stoi(L) - 1; i++)
            {
                sum = sum + stod(A[i]);
                num++;
            }
            double ar_mean = sum / num;
            //Выход
            cout << "Среднее арифметическое = " << ar_mean << endl;
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
    try
    {
        string N;
        cout << "Введите массив A (N):\n";
        cin >> N;
        if (stoi(N) > 1)
        {
            
            string* A = new string[stoi(N)];
            cout << "Введите число A:\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }
            double sum = 0;
            int num = 0;
            double* D = new double[stoi(N)]; 
            for (int i = 0; i < stoi(N) - 1; i++)
            {
                D[i] = stod(A[i + 1]) - stod(A[i]);
            }
            bool achtung = true;
            for (int i = 0; i < stoi(N); i++)
            {
                if (D[i] != D[i+1])
                {
                    achtung = false;
                }
            }

            
            if (achtung == false)
            {
                cout << "\n0\n";
            }
            else
            {
                cout << endl << D[1] << endl;
            }


            delete[] A;
            delete[] D;
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
    try
    {
        string N;
        cout << "Введите массив A (N):\n";
        cin >> N;
        if (stoi(N) > 1)
        {
        
            string* A = new string[stoi(N)];
            cout << "Введите число A:\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

        
            double min = 1000000;
            for (int i = 1; i < stoi(N); i+=2)
            {
                if (stod(A[i]) < min)
                {
                    min = stod(A[i]);
                }
            }

      
            cout << "Минимальный " << min << endl;


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
        string N;
        cout << "Введите массив A (N):\n";
        cin >> N;
        if (stoi(N) > 1)
        {
 
            string* A = new string[stoi(N)];
            cout << "Введите число A:\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            int index = -1;
            if (stod(A[0]) > stod(A[1]))
            {
                index = 0;
            }
            for (int i = 1; i < stoi(N) - 1; i++)
            {
                if ((stod(A[i]) > stod(A[i - 1])) and (stod(A[i]) > stod(A[i + 1])))
                {
                    index = i;
                }
            }
            if (stod(A[stoi(N) - 1]) > stod(A[stoi(N) - 2])) 
            {
                index = stoi(N);
            }

            if (index >= 0)
            {
                cout << "Ответ: " << index + 1 << endl;
            }
            else
            {
                cout << "Максимальый\n";
            }

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
void Fifth()
{
    try
    {
        string N;
        cout << "Введите массив A (N):\n";
        cin >> N;
        if (stoi(N) > 1)
        {

            string* A = new string[stoi(N)];
            cout << "Введите число A:\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            string* B = new string[stoi(N)];
            for (int i = 0; i < stoi(N); i++)
            {
                B[i] = A[i];
            }

            for (int i = 0; i < stoi(N); i++) {
                for (int j = 0; j < stoi(N) - 1; j++) {
                    if (stod(A[j]) > stod(A[j + 1])) {
                        double a = stod(A[j]);
                        A[j] = A[j + 1];
                        A[j + 1] = to_string(a);
                    }
                }
            }


            double target = -100000000;
            for (int i = 0; i < stoi(N) - 1; i++)
            {
                if (stod(A[i]) == stod(A[i + 1]))
                {
                    target = stod(A[i]);
                }
            }
            
            if (target != -100000000)
            {
                cout << "Ответ:\n";
            }
            for (int i = 0; i < stoi(N); i++)
            {
                if (target == stod(B[i])) 
                {
                    cout << i + 1 << endl;
                }
            }
            
 
            

            delete[] A;
            delete[] B;
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

void Error()
{
    cout << "Неверный номер\n" << endl;
}

int main()
{
    while (true) {
        int ExNum;
        cout << "   Пожалуйста, выберите номер задания (0 — для выхода)\n"
            << " 1) Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее арифметическое элементов массива с номерами от K до L включительно.\n"
            << " 2) Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют ли его элементы арифметическую прогрессию. \n"
            << "    Если образуют, то вывести разность прогрессии, если нет — вывести 0.\n"
            << " 3) Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6\n"
            << " 4) Дан массив размера N. Найти номер его последнего локального максимума (локальный максимум — это элемент, который больше любого из своих соседей).\n"
            << " 5) Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. Найти номера одинаковых элементов и вывести эти номера в порядке возрастания\n";
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
