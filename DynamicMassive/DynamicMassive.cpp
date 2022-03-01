#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    int n;
    int m;
    cin >> n;
    cin >> m;
    int** a = new int* [n];
    int* k = new int[n * m];
    int b = 0;
    int c = 0;
    int d = 0;

   cout << "----Происходит ввод данных матрицы---- " << endl << endl;;

   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= m; j++)
       {
           a[i] = new int[m];
       }
   }
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m; j++)
      {
            c++;
            cout << "Введите " << c << " элемент матрицы: ";
            cin >> d;
            k[c] = d;
            a[i][j] = k[c];
       }

    }
    cout << endl;

    cout << "Матрица смежности: " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << (a[i][j]) << " ";
        }
        cout << endl;
    }

	
}

