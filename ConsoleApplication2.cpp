// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>
#include <ctime>
using namespace std;

/*void foo(int a)
{
    ++a;
}

void foo1(int* a)
{
  //  cout << *a<<endl;
   ( *a)++;
}

void swaper(int* pa, int* pb)
{
    int temp = 0;
        temp = *pa;
        *pa = *pb;
        *pb = temp;
}*/

void FillArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 30;
    }
}

void ShowArray(const int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    /* int  a;
     int rows = 4;
     int cols = 5;
     cin >> rows >> cols ;
     int **arr= new int *[rows];
     for (int i = 0; i < rows; i++)
     {
         arr[i] = new int[cols];
     }

     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j < cols; j++)
         {
             arr[i][j] = rand() % 10;
         }
     }


     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j < cols; j++)
         {
             cout << arr[i][j] << "\t";
         }
         cout << endl;
     }

     /*for (int i = 0; i < rows; i++)
     {
         delete[] arr[i];
     }

     delete[]arr;*/
    int size;

    cout << "Vvedi razmer firstArreysiva : \n";
    cin >> size;
    int* firstArrey = new int[size];
    int* secondArrey = new int[size];



    FillArray(firstArrey, size);
    FillArray(secondArrey, size);

    cout << "First array: \t" << endl;
    ShowArray(firstArrey, size);
    cout << "Second array: \t" << endl;
    ShowArray(secondArrey, size);

    delete[]firstArrey;

   firstArrey = new int[size];

    for (int i = 0; i < size; i++)
    {
        firstArrey[i] = secondArrey[i];
    }

    cout << "First array: \t" << endl;
    ShowArray(firstArrey, size);
    cout << "Second array: \t" << endl;
    ShowArray(secondArrey, size);

    delete[]firstArrey;
    delete[]secondArrey;
    return 0;
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
