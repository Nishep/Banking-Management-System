#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void login();
void registr();
//void display();

int main()
{
        int choice;
        cout<<"1.DISPLAY"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        //display();
                        break;
                case 2:
                        registr();
                        break;
                case 4:
                        exit(0);
                        break;
                default:
                        system("cls");
                        cout<<"Please !! choose option 1 to 3\n"<<endl;
                        int main();
        }

}

void registr()
{

        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;

        ofstream reg("manager_login.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        int main();
}
