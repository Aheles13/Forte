#include <iostream>
#include <Windows.h>

using namespace std;

// Функция для вывода клавиш фортепиано
void printPianoKeys()
{
    cout << "Press the following keys to play the notes:\n";
    cout << "[Z] [X] [C] [V] [B] [N] [M]\n";
    cout << " C#  D#     F#  G#  A#\n";
    cout << "[Z] [X] [C] [V] [B] [N] [M]\n";
    cout << "  C   D   E   F   G   A   B\n";
}

int main()
{
    printPianoKeys(); // Выводим клавиши фортепиано

    while (true)
    {
        if (GetAsyncKeyState('Z') & 0x8000)
        {
            cout << "\b[C#]";
            Beep(277, 250);
            Sleep(50);
            cout << "\b\b\b   ";
        }
        if (GetAsyncKeyState('X') & 0x8000)
        {
            cout << "\b[D#]";
            Beep(311, 250);
            Sleep(50);
            cout << "\b\b\b   ";
        }
        if (GetAsyncKeyState('C') & 0x8000)
        {
            cout << "\b[E ]";
            Beep(330, 250);
            Sleep(50);
            cout << "\b\b\b   ";
        }
        if (GetAsyncKeyState('V') & 0x8000)
        {
            cout << "\b[F#]";
            Beep(370, 250);
            Sleep(50);
            cout << "\b\b\b   ";
        }
        if (GetAsyncKeyState('B') & 0x8000)
        {
            cout << "\b[G#]";
            Beep(415, 250);
            Sleep(50);
            cout << "\b\b\b   ";
        }
        if (GetAsyncKeyState('N') & 0x8000)
        {
            cout << "\b[A#]";
            Beep(466, 250);
            Sleep(50);
            cout << "\b\b\b   ";
        }
        if (GetAsyncKeyState('M') & 0x8000)
        {
            cout << "\b[B ]";
            Beep(494, 250);
            Sleep(50);
            cout << "\b\b\b   ";
        }
        Sleep(10);
    }
    return 0;
}



              
            
