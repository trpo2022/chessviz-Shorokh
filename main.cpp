#include <iostream>

using namespace std;

void Output(char board[8][8])
{
    cout << "   ";
    for (int i = 1; i < 9; i++) {
        cout << i << " ";
    }
    cout << endl << endl;
    for (int i = 0; i < 8; i++) {
        cout << (char)('A' + i) << "  ";
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << " " << (char)('A' + i);
        cout << endl;
    }
    cout << endl;
    cout << "   ";
    for (int i = 1; i < 9; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    char board[8][8]
            = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};
    Output(board);
    return 0;
}

