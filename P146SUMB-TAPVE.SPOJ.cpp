#include <iostream>
using namespace std;

void print()
{

}

int main()
{
    int n;
    cin>> n;

    // declare matrix 2n + 1 * 2n + 1
    int size = 2 * n + 1,
        mid  = n;
    //phan tren
    for (int i = 0; i < size / 2; i++)
    {
        int x = 0;
        for (int j = 0; j < size; j++)
        {
            if (j < mid - i) cout << "  ";
            if (j >= mid - i && j <= mid + i)
            {
                cout << x << " ";
                if (j < mid) x++;
                else x--;
            }
        }
        cout << endl;
    }
    //phan duoi
    for (int i = size / 2; i >= 0; i--)
    {
        int x = 0;
        for (int j = 0; j < size; j++)
        {
            if (j < mid - i) cout << "  ";
            if (j >= mid - i && j <= mid + i)
            {
                cout << x << " ";
                if (j < mid) x++;
                else x--;
            }
        }
        cout << endl;
    }
}
