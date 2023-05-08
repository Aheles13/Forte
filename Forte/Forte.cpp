#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;


// Изображение клавиш.
void printPianoKeys()
{
    cout << "Press the following keys to play the notes:\n";
    cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |___||___||___||___||___||___||___|\n";

    cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";

    cout << "Press [Esc] to exit\n";
    cout << "Press [Delete] to clear\n";
    cout << "Press [Space] to pause\n";
    cout << "Press [TAB] to menu\n";

}
void printMenu()
{
    

    cout << "Press [Esc] to exit\n";
    cout << "Press [Delete] to clear\n";
    cout << "Press [Space] to pause\n";
    cout << "Press [TAB] to menu\n";

}



void printPressedKey(char key)
{
    
    cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |___||___||___||___||___||___||___|\n";

    cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";


}


void clearPressedKey()
{
    cout << "\r"; 
    cout << "                 "; 
    cout << "\r"; 
    //system("cls");
}

int main()
{
   

    printPianoKeys(); // Вызов изображения клвиш.

    while (true)
    {
        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
        {
            break; // Выход.
        }
        if (GetAsyncKeyState(VK_DELETE) & 0x8000)
        {
            system("cls"); // Очистка консоли.
        }
        if (GetAsyncKeyState(VK_SPACE) & 0x8000)
        {
            system("pause"); // Пауза.
        }
        if (GetAsyncKeyState(VK_TAB) & 0x8000)
        {
            cout << "Press [Esc] to exit\n";
            cout << "Press [Delete] to clear\n";
            cout << "Press [Space] to pause\n";
            cout << "Press [TAB] to menu\n";
            system("pause");
        }

        if (GetAsyncKeyState('Z') & 0x8000)
        {
            //printPressedKey('Z');
            system("cls");
            Sleep(1);
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |###||   ||   ||   ||   ||   ||   | \n";
            cout << " |###||   ||   ||   ||   ||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(277, 250);
            Sleep(1); 
            printMenu();
        }

        ;
        if (GetAsyncKeyState('X') & 0x8000)
        {

            // printPressedKey('X');
            system("cls");
            Sleep(1);
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||###||   ||   ||   ||   ||   | \n";
            cout << " |   ||###||   ||   ||   ||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(311, 250);
            Sleep(1);
            printMenu();
        }
        if (GetAsyncKeyState('C') & 0x8000)
        {
            //printPressedKey('C');
            system("cls");
            Sleep(1);
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||###||   ||   ||   ||   | \n";
            cout << " |   ||   ||###||   ||   ||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(330, 250);
            Sleep(1);
            printMenu();
        }
        if (GetAsyncKeyState('V') & 0x8000)
        {
            //printPressedKey('V');
            system("cls");
            Sleep(1);
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||   ||###||   ||   ||   | \n";
            cout << " |   ||   ||   ||###||   ||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(370, 250);
            Sleep(1);
            printMenu();

        }
        if (GetAsyncKeyState('B') & 0x8000)
        {
            //printPressedKey('B');
            system("cls");
            Sleep(1);
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||   ||   ||###||   ||   | \n";
            cout << " |   ||   ||   ||   ||###||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(415, 250);
            Sleep(1);
            printMenu();

        }
        if (GetAsyncKeyState('N') & 0x8000)
        {
            //printPressedKey('N');
            system("cls");
            Sleep(0);
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||   ||   ||   ||###||   | \n";
            cout << " |   ||   ||   ||   ||   ||###||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(466, 250);
            Sleep(0);
            printMenu();

        }
        if (GetAsyncKeyState('M') & 0x8000)
        {
            //printPressedKey('M');
            
            system("cls");
            
            Sleep(0);
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||   ||   ||   ||   ||###| \n";
            cout << " |   ||   ||   ||   ||   ||   ||###| \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            clearPressedKey();
            Beep(494, 250);
            Sleep(1);
            printMenu();
            

        }
        
        
       
    }
    ;
    

    return 0;
}
