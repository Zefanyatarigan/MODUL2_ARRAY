#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    // Meminta user untuk memasukkan ukuran elemen di setiap dimensi
    cout << "Masukkan ukuran elemen untuk dimensi x: ";
    cin >> x;
    cout << "Masukkan ukuran elemen untuk dimensi y: ";
    cin >> y;
    cout << "Masukkan ukuran elemen untuk dimensi z: ";
    cin >> z;

    // Deklarasi array 3 dimensi dengan ukuran dari user
    int arr[x][y][z];

    // Input elemen
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << "Input Array[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
        cout << endl;
    }

    // Output Array
    cout << "\nData Array:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}
