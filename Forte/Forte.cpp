#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;


// ������� ��� ������ ������ ����������
void printPianoKeys()
{
    cout << "Press the following keys to play the notes:\n";
    cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |___||___||___||___||___||___||___|\n";
  
    cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
   
    cout << "Press [Esc] to exit\n";
      
}


// ������� ��� ������ ���������� �������
void printPressedKey(char key)
{
   /* cout << "  ___________ \n";
    cout << " |########## |\n";
    cout << " |########## | " << key << "\n";
    cout << " |########## |\n";
    cout << " |___________|\n";*/
    
    cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |   ||   ||   ||   ||   ||   ||   | \n";
    cout << " |___||___||___||___||___||___||___|\n";

    //cout << "[Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
    
   
}

// ������� ��� �������� � ������� ������ ����� ������� �������
void clearPressedKey()
{
    cout << "\r"; // ������� ������� � ������ ������
    cout << "                 "; // ������� ������
    cout << "\r"; // ������� ������� � ������ ������
    //system("cls");
}

int main()
{
    
    

    printPianoKeys(); // ������� ������� ����������

    while (true)
    {
        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
        {
            break; // ���� ������ ������� Esc, �� ������� �� �����
        }
        
        if (GetAsyncKeyState('Z') & 0x8000)
        {
           // printPressedKey('Z');
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |###||   ||   ||   ||   ||   ||   | \n";
            cout << " |###||   ||   ||   ||   ||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "[Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(277, 250);
            clearPressedKey();
            Sleep(50);
            //system("pause");
            
        }
          
        ;
        if (GetAsyncKeyState('X') & 0x8000)
        {
            
           // printPressedKey('X');
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||###||   ||   ||   ||   ||   | \n";
            cout << " |   ||###||   ||   ||   ||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(311, 250);
            clearPressedKey();
            Sleep(50);
            
        }
        if (GetAsyncKeyState('C') & 0x8000)
        {
            //printPressedKey('C');
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||###||   ||   ||   ||   | \n";
            cout << " |   ||   ||###||   ||   ||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(330, 250);
            clearPressedKey();
            Sleep(50);
           
        }
        if (GetAsyncKeyState('V') & 0x8000)
        {
            //printPressedKey('V');
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||   ||###||   ||   ||   | \n";
            cout << " |   ||   ||   ||###||   ||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(370, 250);
            clearPressedKey();
            Sleep(50);
           
        }
        if (GetAsyncKeyState('B') & 0x8000)
        {
            //printPressedKey('B');
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||   ||   ||###||   ||   | \n";
            cout << " |   ||   ||   ||   ||###||   ||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(415, 250);
            clearPressedKey();
            Sleep(50);
           
        }
        if (GetAsyncKeyState('N') & 0x8000)
        {
            //printPressedKey('N');
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||   ||   ||   ||###||   | \n";
            cout << " |   ||   ||   ||   ||   ||###||   | \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(466, 250);
            clearPressedKey();
            Sleep(50);
            
        }
        if (GetAsyncKeyState('M') & 0x8000)
        {
            //printPressedKey('M');
            cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
            cout << " |   ||   ||   ||   ||   ||   ||###| \n";
            cout << " |   ||   ||   ||   ||   ||   ||###| \n";
            cout << " |___||___||___||___||___||___||___|\n";
            cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";
            Beep(494, 250);
            clearPressedKey();
            Sleep(50);
            
        }
       
    }
    
    return 0;
}




