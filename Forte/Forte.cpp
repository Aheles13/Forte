#include <iostream>
#include <Windows.h>

using namespace std;

// Функция для вывода клавиш фортепиано
void printPianoKeys()
{
    cout << "Press the following keys to play the notes:\n";
    cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |___||___||___||___||___||___||___|\n";
    cout << " [Z]   [X]  [C]  [V]  [B]  [N]  [M] \n";
   
    cout << "Press [Esc] to exit\n";
}

// Функция для вывода вдавленной клавиши
void printPressedKey(char key)
{
    cout << "  ___________\n";
    cout << " |########## |\n";
    cout << " |#####" << key << "     |\n";
    cout << " |___________|\n";
}

// Функция для задержки и очистки экрана после отжатия клавиши
void clearPressedKey()
{
    cout << "\r"; // Возврат каретки в начало строки
    cout << "               "; // Очистка строки
    cout << "\r"; // Возврат каретки в начало строки
}

int main()
{
    printPianoKeys(); // Выводим клавиши фортепиано

    while (true)
    {
        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
        {
            break; // Если нажата клавиша Esc, то выходим из цикла
        }

        if (GetAsyncKeyState('Z') & 0x8000)
        {
            printPressedKey('Z');
            Beep(277, 250);
            clearPressedKey();
            Sleep(50);
           
        }
        if (GetAsyncKeyState('X') & 0x8000)
        {
            printPressedKey('X');
            Beep(311, 250);
            clearPressedKey();
            Sleep(50);
            
        }
        if (GetAsyncKeyState('C') & 0x8000)
        {
            printPressedKey('C');
            Beep(330, 250);
            clearPressedKey();
            Sleep(50);
           
        }
        if (GetAsyncKeyState('V') & 0x8000)
        {
            printPressedKey('V');
            Beep(370, 250);
            clearPressedKey();
            Sleep(50);
           
        }
        if (GetAsyncKeyState('B') & 0x8000)
        {
            printPressedKey('B');
            Beep(415, 250);
            clearPressedKey();
            Sleep(50);
           
        }
        if (GetAsyncKeyState('N') & 0x8000)
        {
            printPressedKey('N');
            Beep(466, 250);
            clearPressedKey();
            Sleep(50);
            
        }
        if (GetAsyncKeyState('M') & 0x8000)
        {
            printPressedKey('M');
            Beep(494, 250);
            clearPressedKey();
            Sleep(50);
            
        }
        
    }

    return 0;
}



