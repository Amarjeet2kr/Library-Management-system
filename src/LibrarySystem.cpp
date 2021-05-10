//*******************************************************************************************************

//                                 LIBRARY MANAGEMENT SYSTEM

//*******************************************************************************************************/

#include "LibrarySystem.h"
using namespace std;

string username[] = {"amar", "vivek"};
string password[] = {"pass", "pass"};
int loginFlag = false;

COORD coord = {0, 0};

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void adminLogin()
{
    string userNameInput, passInput;
    while (loginFlag == false)
    {
        system("cls");
        gotoxy(20, 3);
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20, 4);
        cout<<"\xB2\xB2";
        gotoxy(74, 4);
        cout<<"\xB2\xB2";
        gotoxy(20, 5);
        cout<<"\xB2\xB2              LIBRARY MANAGEMENT SYSTEM             \xB2\xB2";
        gotoxy(20, 6);
        cout<<"\xB2\xB2";
        gotoxy(74, 6);
        cout<<"\xB2\xB2";
        gotoxy(20, 7);
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(36, 9);
        cout << "USER NAME: ";
        cin >> userNameInput;
        gotoxy(36, 11);
        cout << "PASSWORD: ";
        cin >> passInput;
        for (int i = 0; i <= 2; i++)
        {
            if (userNameInput == username[i] && passInput == password[i])
            {
                loginFlag = 1;
            }
        }
    }
}

int t(void) //for time
{
    time_t t;
    time(&t);
    cout << "Date and time: " << ctime(&t);
    return 0;
}

void mainMenu()
{
    int choice;
    system("cls");
    gotoxy(20, 3);
    cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    gotoxy(20, 5);
    cout << "\xDB\xDB\xDB\xDB\xB2 1. Add Books   ";
    gotoxy(20, 7);
    cout << "\xDB\xDB\xDB\xDB\xB2 2. Delete books";
    gotoxy(20, 9);
    cout << "\xDB\xDB\xDB\xDB\xB2 3. Search Books";
    gotoxy(20, 11);
    cout << "\xDB\xDB\xDB\xDB\xB2 4. Issue Books";
    gotoxy(20, 13);
    cout << "\xDB\xDB\xDB\xDB\xB2 5. View Book list";
    gotoxy(20, 15);
    cout << "\xDB\xDB\xDB\xDB\xB2 6. Close Application";
    gotoxy(20, 17);
    cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    gotoxy(20, 19);
    t();
    gotoxy(20, 20);
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        addBooks();
        break;
    case 2:
        //deleteBooks();
        break;
    case 3:
        //searchBooks();
        break;
    case 4:
        //issueBooks();
        break;
    case 5:
        //viewBooks();
        break;
    case 6:
        system("cls");
        gotoxy(16, 3);
        cout << "\tLibrary Management System";
        gotoxy(16, 4);
        cout << "\tMini Project in C";
        gotoxy(16, 5);
        cout << "\tis done by ";
        gotoxy(16, 7);
        cout << "\tAmarjeet";
        gotoxy(16, 8);
        cout << "******************************************";
        gotoxy(16, 10);
        cout << "*******************************************";
        gotoxy(16, 11);
        cout << "*******************************************";
        gotoxy(16, 13);
        cout << "********************************************";
        gotoxy(10, 17);
        cout << "Exiting in 3 second...........>";
        Sleep(3000);
        exit(0);
    default:
        break;
    }
}

void addBooks()
{
    system("cls");
    fstream fout;
    fout.open("book.txt", ios_base::app);
    if (fout)
    {
        cout << "Enter book details" << endl;
        cout << "Book ID: ";
        cin >> b.bid;
        fout << b.bid;
        cout << "Book Name: ";
        cin >> b.bname;
        fout << "    " << b.bname;
        cout << "Author: ";
        cin >> b.author;
        fout << "    " << b.author;
        cout << "Quantity: ";
        cin >> b.quantity;
        fout <<"    "<< b.quantity << endl;
    }
    fout.close();
    cout<<"Successfully added";
    Sleep(3000);
    mainMenu();
}

int main()
{
    adminLogin();
    if (loginFlag)
    {
        mainMenu();
    }
    return 0;
}