//*******************************************************************************************************
 
//                                 LIBRARY MANGEMENT SYSTEM

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

int main()
{
    adminLogin();
    if(loginFlag)
    {
        cout<<"welcome";
    }
    return 0;
}