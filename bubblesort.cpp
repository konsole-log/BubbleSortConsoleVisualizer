#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int arr[] = {15, 20, 19, 21, 17, 1, 14};
void draw()
{
    int i, j;
    for (i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        int num = arr[i];
        for (j = 0; j < num; j++)
        {
            cout << "=";
        }
        cout << "(" << j << ")" << endl;
    }
}
int main()
{
    int i, j, temp;
    cout << "Initial condition" << endl;
    draw();
    cout << "Simple Bubble sort visualizer in console for integers(>0):" << endl;
    cout << "enter enter to continue" << endl;
    getchar();
    system("clear");
    cout << endl;
    for (i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {

        for (j = 0; j < (sizeof(arr) / sizeof(int)) - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            cout << endl;
            cout << i + 1 << " pass:" << endl;
            draw();
            sleep(1);
            system("clear");
        }
    }
    cout << "Sorted Array: " << endl;
    draw();
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
}
