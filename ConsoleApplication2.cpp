// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>
#include <ctime>
using namespace std;



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

void push_bsck(int*& arr, int& size, const int value)
{
    int* newarr = new int[size + 1];// create a new array(larger by one element)
    for (int i = 0; i < size; i++)
    {
        newarr[i] = arr[i]; //rewrite the old array to the new
    }
    newarr[size] = value; //Add a new element to the end of the array.
    size++;//increase the input parameter by 1
    delete[] arr;//clen the array

    arr = newarr;//in the pointer to the old array we assign the address of the new array
}

void pop_back(int*& arr, int& size)
{
    size--;
    int *newArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }

    delete[]arr;

    arr = newArray; 
}

int main()
{
    srand(time(NULL));
    
    int size = 0;
    cin >> size;
    int* arr = new int[size];
  
    FillArray(arr, size);

    cout << "First array: \t" << endl;
    ShowArray(arr, size);

 /*   push_bsck(arr, size, 1111);
    cout << "New array: \t" << endl;
    ShowArray(arr, size);*/

    pop_back(arr, size);
    ShowArray(arr, size);


   
    delete[]arr;
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
