//*******************************************************************************************************
 
//                                 LIBRARY MANAGEMENT SYSTEM

//*******************************************************************************************************/

#include "LibrarySystem.h"
using namespace std;

string username[]={"amar","vivek"};
string password[]={"pass","pass"};
int loginFlag=false;

void adminLogin()
{
    string userNameInput, passInput;
    while (loginFlag==false)
    {
        system("cls");
        cout<<"\n\n\n\n";
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<">>\t\t\t\tLIBRARY MANAGEMENT SYSTEM\t\t\t\t     >>"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
        cout<<"\t\t\t\tLibrary System Login"<<endl<<endl;
        cout<<"\t\t\t\tEnter username: ";
        cin>>userNameInput;
        cout<<"\t\t\t\tEnter password: ";
        cin>>passInput;
        for (int i = 0; i <= 2; i++)
        {
            if(userNameInput==username[i] && passInput==password[i])
            {
                loginFlag=1;
            }            
        }
        
    }

    
}

COORD coord = {0, 0};

void gotoxy (int x, int y)
{
coord.X = x; coord.Y = y; // X and Y coordinates
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int t(void) //for time
{
    time_t t;
    time(&t);
    cout<<"Date and time: "<<ctime(&t);
    return 0 ;
}

void mainMenu()
{
    int choice;
    system("cls");
    gotoxy(20,3);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    gotoxy(20,5);
    cout<<"\xDB\xDB\xDB\xDB\xB2 1. Add Books   ";
    gotoxy(20,7);
    cout<<"\xDB\xDB\xDB\xDB\xB2 2. Delete books";
    gotoxy(20,9);
    cout<<"\xDB\xDB\xDB\xDB\xB2 3. Search Books";
    gotoxy(20,11);
    cout<<"\xDB\xDB\xDB\xDB\xB2 4. Issue Books";
    gotoxy(20,13);
    cout<<"\xDB\xDB\xDB\xDB\xB2 5. View Book list";
    gotoxy(20,15);
    cout<<"\xDB\xDB\xDB\xDB\xB2 6. Edit Book's Record";
    gotoxy(20,17);
    cout<<"\xDB\xDB\xDB\xDB\xB2 7. Close Application";
    gotoxy(20,19);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    gotoxy(20,20);
    t();
    gotoxy(20,21);
    cout<<"Enter your choice: ";
    cin>>choice;

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
        //editBooks();
        break;
    case 7:
        system("cls");
        gotoxy(16,3);
        cout<<"\tLibrary Management System";
        gotoxy(16,4);
        cout<<"\tMini Project in C";
        gotoxy(16,5);
        cout<<"\tis done by ";
        gotoxy(16,7);
        cout<<"\tAmarjeet";
        gotoxy(16,8);
        cout<<"******************************************";
        gotoxy(16,10);
        cout<<"*******************************************";
        gotoxy(16,11);
        cout<<"*******************************************";
        gotoxy(16,13);
        cout<<"********************************************";
        gotoxy(10,17);
        cout<<"Exiting in 3 second...........>";
        Sleep(3000);
        exit(0);
    default:
        break;
    }
}

void addBooks()
{
    int select;
    system("cls");
    gotoxy(20,5);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    gotoxy(20,7);
    cout<<"\xDB\xDB\xDB\xDB\xB2 1. Computer";
    gotoxy(20,9);
    cout<<"\xDB\xDB\xDB\xDB\xB2 2. Electronics";
    gotoxy(20,11);
    cout<<"\xDB\xDB\xDB\xDB\xB2 3. Electrical";
    gotoxy(20,13);
    cout<<"\xDB\xDB\xDB\xDB\xB2 4. Civil";
    gotoxy(20,15);
    cout<<"\xDB\xDB\xDB\xDB\xB2 5. Mechanical";
    gotoxy(20,17);
    cout<<"\xDB\xDB\xDB\xDB\xB2 6. Architecture";
    gotoxy(20,19);
    cout<<"\xDB\xDB\xDB\xDB\xB2 7. Back to main menu";
    gotoxy(20,21);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    gotoxy(20,22);
    cout<<"Enter your choice:";
    cin>>select;
    if(select==7)
        mainMenu();
    
    

}


int main()
{
    adminLogin();
    if(loginFlag)
    {
        mainMenu();
    }
    return 0;
}