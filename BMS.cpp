
/************************************************/
//BANKING MANAGEMENT SYSTEM DESIGN BY NIMA SHERPA
/************************************************/


#include<iostream>  //HEADER FILE
#include<istream>  // for get data
#include<fstream> // for put data
#include<string.h>
#include<windows.h> // FOR SLEEP MODE
#include<conio.h>
#include<iomanip>
#include<time.h>   // for current time

using namespace std;
char design=35;

int SN;



///function declaration for BMS class

void write_account();	//function to write record in binary file
void display_sp(int);	//function to display account details given by user
void modify_account(int);	//function to modify record of file
void delete_account(int);	//function to delete record of file
void display_all();		//function to display all account details
void deposit_withdraw(int, int); // function to desposit/withdraw amount for given account







///FUNCTION DECLERATION FOR MANAGER CLASS

void createAccountent();
void displayAccountent();
void searchAccountent();
void deleteAccountent();
void updateAccountent();
void writeID();
void changeUsername_managerAccount();

int ACCOUNTENT_ID;


///FUNCTION DECLERATION FOR CURRENTACCOUNTENT CLASS

void create_currentAccount();
void display_currentAccount();
void search_currentAccount();
void deposit_currentAccount();
void withdraw_currentAccount();
void transaction1_currentAccount();
void transaction2_currentAccount();
void delete_currentAccount();
void update_currentAccount();
void write_currentAccount_ID();

int CURRENTACCOUNT_ID;


void changeUsername_currentAccount();

void manager_login();
void accountent_login();
void create_accountent();
void forgot();
void settingOption();
void settingOption1();


class BMS
{

   public:
       time_t now = time(0);
	   tm *ltm = localtime(&now);
       int year =1900+ltm->tm_year, month = 1+ltm->tm_mon, day = ltm->tm_mday, hour = 1+ltm->tm_hour, minu = 1+ltm->tm_min, sec = 1+ltm->tm_sec;
       char ch;
       int num;
       void Welcome();
       void Account_type();
       void Login_option();
       void password_recover();
       void Login_input();
       void Login_success();
       void Login_Error();
       void manager_option();
       void Accountent_option();
};

void BMS::Welcome(){
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t";
	for(int i=0;i<=39;i++)
	cout<<design;
	cout<<"\n";
	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"      BANKING MANAGEMENT SYSTEM       "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
	cout<<"\t\t\t\t\t";
	for(int i=0;i<=39;i++)
	cout<<design;
	cout<<"\n";
	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"          ~~~~~~~~~~~~~~~~~~~         "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"          |    DESIGN BY    |         "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"          ~~~~~~~~~~~~~~~~~~~         "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"           NIMA DAWA SHERPA           "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"            SUBASH PANDEY             "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"            LAXMAN BASNET             "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
	cout<<"\t\t\t\t\t";
	for(int i=0;i<=39;i++)
	cout<<design;
    cout<<"\n\n\t\t\t\t\t      PRESS ANY KEY ENTER LOGIN MENU";
	getch();
}

void BMS::Login_option(){
    do
    {
        system("cls");
        cout<<"\n\n\n\n\n\n";
      	cout<<"\t\t\t\t\t";
      	for(int i=0;i<=39;i++)
      	cout<<design;
      	cout<<"\n";
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"         LOGIN OPTION MENU            "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t";
      	for(int i=0;i<=39;i++)
      	cout<<design;
      	cout<<"\n";
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [1] ADMIN                    "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [2] ACCOUNTANT               "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [3] EXIT                     "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"         SELECT OPTION (1-3)          "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t";
      	for(int i=0;i<=39;i++)
      	cout<<design;
        cout<<"\n\n\t\t\t\t\t\t    OPTION : ";
        cin>>ch;
    	    system("cls");
          switch(ch)
  	      {
          	case '1':
          		manager_login();
          		break;
          	case '2':
          		accountent_login();
          		break;
            case '3':
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n";
                cout<<"\t\t\t\t";
                for(int i=0;i<=66;i++)
                cout<<design;
                cout<<"\n";
                cout<<"\t\t\t\t"<<design<<"                                                                 "<<design<<endl;
                cout<<"\t\t\t\t"<<design<<"     PLEASE VISIT AGAIN. THANK YOU FOR USING THIS SOFTWARE...    "<<design<<endl;
                cout<<"\t\t\t\t"<<design<<"                                                                 "<<design<<endl;
                cout<<"\t\t\t\t";
                for(int i=0;i<=66;i++)
                cout<<design;
                Sleep(1500);
                system("cls");
          		exit(0);
          		break;
            default :

                cout<<"\n\n\n\n\n\n";
  	            cout<<"\t\t\t\t\t";
  	            for(int i=0;i<=39;i++)
  	            cout<<design;
                cout<<"\n";
  	            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                cout<<"\t\t\t\t\t"<<design<<"     PLEASE SELECT OPTION 1 TO 3      "<<design<<endl;
  	            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
  	            cout<<"\t\t\t\t\t";
                for(int i=0;i<=39;i++)
  	            cout<<design;
                Sleep(2000);
              }
  	}while(ch!=4);
    getch();
}

void BMS::Login_input(){
    system("cls");
    cout<<"\n\n\n\n\n\n";
	  cout<<"\t\t\t\t\t";
    for(int i=0;i<=32;i++)
    cout<<design;
    cout<<"\n";
    cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"          ACCOUNT LOGIN        "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
    cout<<"\t\t\t\t\t";
    for(int i=0;i<=32;i++)
    cout<<design;
    cout<<"\n";
    cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"        PLEASE ENTER YOUR      "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"      USERNAME AND PASSWORD    "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"       TO ENTER MAIN  MENU     "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
    cout<<"\t\t\t\t\t";
    for(int i=0;i<=32;i++)
    cout<<design;
}

void BMS::Login_success(){
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=32;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     LOGIN SUCCESSFULL...      "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=32;i++)
  	cout<<design;
}

void BMS::Login_Error(){
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t";
    for(int i=0;i<=32;i++)
    cout<<design;
    cout<<"\n";
    cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"          LOGIN ERROR          "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"  PRESS Y AND y FOR TRY AGAIN  "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"  PRESS N AND n FOR LOGIN MENU "<<design<<endl;
    cout<<"\t\t\t\t\t";
    for(int i=0;i<=32;i++)
    cout<<design;
}

void BMS::password_recover(){
        system("cls");
        cout<<"\n\n\n\n\n";
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=32;i++)
        cout<<design;
        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"       PASSWORD RECOVER        "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=32;i++)
        cout<<design;
        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"     PLEASE ENTER REQUIRED     "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"    INFORMATION TO RECOVERED   "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"       YOUR OLD PASSWORD       "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                               "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=32;i++)
        cout<<design;
}


void BMS::manager_option(){

    ifstream read;
    read.open("Accountent_id.txt", ios::app);
    if (!read.fail()) {
        read >> ACCOUNTENT_ID;
    }
    else {
        ACCOUNTENT_ID = 0;
    }
    read.close();
    do
	{
        system("cls");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=39;i++)
        cout<<design;
        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"               ADMIN MENU             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t";
      	for(int i=0;i<=39;i++)
      	cout<<design;
      	cout<<"\n";
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [1] TRANSACTION DETAILS      "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [2] ACCOUNT HOLDER LIST      "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [3] ACCOUNTANT LIST          "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [4] ACCOUNTANT DETAILS       "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [5] CREATE ACCOUNTANT        "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [6] MODIFY ACCOUNTANT        "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [7] DELETE ACCOUNTANT        "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [8] SETTING                  "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [9] LOGOUT                   "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         SELECT OPTION (1-9)          "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t";
      	for(int i=0;i<=39;i++)
      	cout<<design;
        cout<<"\n\n\t\t\t\t\t\t OPTION : ";
  	    cin>>ch;
  	    system("cls");
        switch(ch)
        {
        	case '1':

        	    do
                {
                    system("cls");
                    cout<<"\n\n\n\n\n\n";
                    cout<<"\t\t\t\t\t";
                    for(int i=0;i<=39;i++)
                    cout<<design;
                    cout<<"\n";
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"          TRANSACTION MENU            "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t";
                    for(int i=0;i<=39;i++)
                    cout<<design;
                    cout<<"\n";
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"         [1] DEPOSIT DETAILS          "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"         [2] WITHDRAW DETAILS         "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"         [3] RETURN ADMIN MENU        "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"         SELECT OPTION (1-3)          "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t";
                    for(int i=0;i<=39;i++)
                    cout<<design;
                    cout<<"\n\n\t\t\t\t\t\t OPTION : ";
                    cin>>ch;
                    system("cls");
                    switch(ch)
                    {
                        case '1':
                            transaction1_currentAccount();
                        break;
                        case '2':
                            transaction2_currentAccount();
                        break;
                        case '3':
                            BMS::manager_option();
                        break;
                        default :
                            cout<<"\n\n\n\n\n\n";
                            cout<<"\t\t\t\t\t";
                            for(int i=0;i<=39;i++)
                            cout<<design;
                            cout<<"\n";
                            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                            cout<<"\t\t\t\t\t"<<design<<"     PLEASE SELECT OPTION 1 TO 3      "<<design<<endl;
                            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                            cout<<"\t\t\t\t\t";
                            for(int i=0;i<=39;i++)
                            cout<<design;
                            Sleep(2000);
                        }
                }while(ch!=4);
                getch();

        		break;
        	case '2':
			    display_currentAccount();
        		break;
        	case '3':
			    displayAccountent();
        		break;
        	case '4':
        	    searchAccountent();
        		break;
        	case '5':
        	    createAccountent();
        		break;
        	case '6':
                updateAccountent();
        		break;
        	case '7':
        	    deleteAccountent();
        		break;
        	case '8':
        	     settingOption();
        		break;
            case '9':
                writeID();
        		break;
             default:
              cout<<"\n\n\n\n\n\n";
	            cout<<"\t\t\t\t\t";
	            for(int i=0;i<=39;i++)
	            cout<<design;
                cout<<"\n";
	            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                cout<<"\t\t\t\t\t"<<design<<"     PLEASE SELECT OPTION 1 TO 9      "<<design<<endl;
	            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
	            cout<<"\t\t\t\t\t";
              for(int i=0;i<=39;i++)
	            cout<<design;
                Sleep(1000);
            }
	}while(ch!='8');
    getch();
}



void BMS::Accountent_option(){

	ifstream read;
    read.open("currentAccount_id.txt", ios::app);
    if (!read.fail()) {
        read >> CURRENTACCOUNT_ID;
    }
    else {
        CURRENTACCOUNT_ID = 0;
    }
    read.close();
    do
	{
        system("cls");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=39;i++)
        cout<<design;
        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"            ACCOUNTENT MENU           "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t";
      	for(int i=0;i<=39;i++)
      	cout<<design;
      	cout<<"\n";
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [1] CREATE ACCOUNT           "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [2] DEPOSIT AMOUNT           "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [3] WITHDRAW AMOUNT          "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [4] ACCOUNT HOLDER LIST      "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [5] ACCOUNT DETAILS          "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [6] MODIFY AN ACCOUNT        "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [7] CLOSE AN ACCOUNT         "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [8] SETTING                  "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         [9] LOGOUT                   "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"         SELECT OPTION (1-9)          "<<design<<endl;
      	cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
      	cout<<"\t\t\t\t\t";
      	for(int i=0;i<=39;i++)
      	cout<<design;
        cout<<"\n\n\t\t\t\t\t\t OPTION :";
  	    cin>>ch;
  	    system("cls");
        switch(ch)
	      {
        	case '1':
        	    create_currentAccount();
        		break;
        	case '2':
			    deposit_currentAccount();
        		break;
        	case '3':
        	    withdraw_currentAccount();
        		break;
        	case '4':
			    display_currentAccount();
        		break;
        	case '5':
                search_currentAccount();
        		break;
        	case '6':
                update_currentAccount();
        		break;
        	case '7':
        	    delete_currentAccount();
        		break;
            case '8':
                settingOption1();
        		break;
            case '9':
        		write_currentAccount_ID();
        		break;
          default :
              cout<<"\n\n\n\n\n\n";
	            cout<<"\t\t\t\t\t";
	            for(int i=0;i<=39;i++)
	            cout<<design;
              cout<<"\n";
	            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
              cout<<"\t\t\t\t\t"<<design<<"     PLEASE SELECT OPTION 1 TO 9      "<<design<<endl;
	            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
	            cout<<"\t\t\t\t\t";
              for(int i=0;i<=39;i++)
	            cout<<design;
              Sleep(1000);
            }
	}while(ch!='8');
}


//MANAGER CLASS START

class MANAGER : public BMS
{
    char choice;
    int Accountent_id;
    string Accountent_name, Accountent_username, Accountent_password;
    int Accountent_pin;
public:
    void addAccountent();
    void print();
    void readData();
    void accountentList();
    void accountentTable();
    int searchData();
    void deleteData();
    void updateData();
};

void  MANAGER::addAccountent() {

    createID_loop:

    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"              CREATE ACCOUNTENT ID           "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout << "\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    ofstream write;
    write.open("Accountent_id.txt");
    write << ACCOUNTENT_ID;

    ifstream read;
    read.open("Accountent_id.txt");
    read >> ACCOUNTENT_ID;

    cout << "\t\t\t\t\t    ID NUMBER IS : " << ACCOUNTENT_ID;
    cout << "\n\t\t\t\t\t    ENTER FULL NAME : ";
    cin.get();
    getline(cin, Accountent_name);
    cout << "\t\t\t\t\t    ENTER USERNAME : ";
    cin >> Accountent_username;
    cout << "\t\t\t\t\t    ENTER PASSWORD : ";
    cin >> Accountent_password;
    cout << "\t\t\t\t\t    ENTER PIN NUMBER : ";
    cin >> Accountent_pin;

    read.close();
    write.close();

    write.open("Accountent.txt", ios::app);
    write << "\n" << ACCOUNTENT_ID;
    write << "\n" << Accountent_name ;
    write << "\n" << Accountent_username ;
    write << "\n" << Accountent_password ;
    write << "\n" << Accountent_pin;
    write.close();
    ACCOUNTENT_ID++;

  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"             DATA SAVE IN  FILE              "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";

  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"       YOU WANT TO CREATE ANOTHER ID         "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  FOR YES PRESS (Y/y) OR FOR NO PRESS (N/n)  "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;


    cout<< "\n\n\t\t\t\t\t\t ENTER (Y/y) OR (N/n) : ";
    cin >> choice;
    if (choice == 89 || choice == 121)
    {
        system("cls");
        goto createID_loop;
    }
    else
    {
        cout<<"\n\n\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<< "\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     PRESS ANY KEY TO RETURN ADMIN MENU      "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	getch();
    }
}


int MANAGER::searchData() {

    int search_id;
    cout << "\n\t\t\t\t\t\t ID : ";
    cin >> search_id;
    ifstream read;
    read.open("Accountent.txt");
    while (!read.eof()) {
        read >> Accountent_id;
        read.ignore();
        getline(read, Accountent_name);
        read >> Accountent_username;
        read >> Accountent_password;
        read >> Accountent_pin;
        if (Accountent_id == search_id) {
                MANAGER::print();
                return search_id;
        }
    }
}

void MANAGER::print() {

    cout << "\t\t\t\t\t\t FULL NAME IS : " << Accountent_name;
    cout << "\n\t\t\t\t\t\t USERNAME IS: " << Accountent_username;
    cout << "\n\t\t\t\t\t\t PASSWORD IS : " << Accountent_password;
    cout << "\n\t\t\t\t\t\t PIN NUMBER IS : " << Accountent_pin;
}


void MANAGER::readData() {

    system("cls");
    ifstream read;
    read.open("Accountent.txt");
    while (!read.eof()) {
        read >> Accountent_id;
        read.ignore();
        getline(read, Accountent_name);
        read >> Accountent_username;
        read >> Accountent_password;
        read >> Accountent_pin;
        MANAGER::print();
    }
    read.close();
    getch();
}

void MANAGER::accountentList() {


    cout<<"\t\t"<<design;
    cout << setw(8);
    cout  << Accountent_id ;

    cout << setw(25);
    cout << Accountent_name ;

    cout << setw(13);
    cout << Accountent_username ;

    cout << setw(15);
    cout << Accountent_password ;


    cout << setw(11);
    cout << Accountent_pin ;
    cout<<"  "<<  design<<endl;
}


void MANAGER::accountentTable(){

    system("cls");
    ifstream read;
    read.open("Accountent.txt");
	if(!read)
	{
		cout<<"\n\n\n\t\t\t\t\t File could not be open !! Press any Key...";
		return;
	}
	else
    {
        cout<<"\n\n\n\n\n\n";
  	cout<<"\t\t";
    for(int i=0;i<=75;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t"<<design<<"                                                                          "<<design<<endl;
  	cout<<"\t\t"<<design<<"                            ACCOUNT HOLDER LIST                           "<<design<<endl;
  	cout<<"\t\t"<<design<<"                                                                          "<<design<<endl;
  	cout<<"\t\t";
  	for(int i=0;i<=75;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t"<<design<<"                                                                          "<<design<<endl;
  	cout<<"\t\t"<<design<<"    ID              FULL NAME         USERNAME       PASSWORD        PIN  "<<design<<endl;
  	cout<<"\t\t"<<design<<"                                                                          "<<design<<endl;

	while (!read.eof()) {
        read >> Accountent_id;
        read.ignore();
        getline(read, Accountent_name);
        read >> Accountent_username;
        read >> Accountent_password;
        read >> Accountent_pin;
        MANAGER::accountentList();
	}
	cout<<"\t\t"<<design<<"                                                                          "<<design<<endl;
  	cout<<"\t\t";
  	for(int i=0;i<=75;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t"<<design<<"                                                                          "<<design<<endl;
  	cout<<"\t\t"<<design<<"                    PRESS ANY KEY TO RETURN ADMIN MENU                    "<<design<<endl;
  	cout<<"\t\t"<<design<<"                                                                          "<<design<<endl;
  	cout<<"\t\t";
  	for(int i=0;i<=75;i++)
  	cout<<design;
    }
	read.close();
	getch();

}


void MANAGER::deleteData() {

    int delete_id = searchData();

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     YOU WANT TO DELETE ACCOUNTENT DATA      "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  FOR YES PRESS (Y/y) OR FOR NO PRESS (N/n)  "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    cout<< "\t\t\t\t\t\t ENTER (Y/y) OR (N/n) : ";
    cin >> choice;
    if (choice == 89 || choice == 121) {
        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("Accountent.txt");
        while (!read.eof()) {
            read >> Accountent_id;
            read.ignore();
            getline(read, Accountent_name);
            read >> Accountent_username;
            read >> Accountent_password;
            read >> Accountent_pin;
            if (Accountent_id != delete_id) {
                tempFile << "\n" << Accountent_id;
                tempFile << "\n" << Accountent_name;
                tempFile << "\n" << Accountent_username;
                tempFile << "\n" << Accountent_password;
                tempFile << "\n" << Accountent_pin;
            }
        }
        read.close();
        tempFile.close();
        remove("Accountent.txt");
        rename("temp.txt", "Accountent.txt");

        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"    ACCOUNTENT DATA DELETED SUCCESSFULLY     "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }
    else
    {
        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"        ACCOUNTENT DATA IS NOT DELETED       "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     PRESS ANY KEY TO RETURN ADMIN MENU      "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
    getch();
}

void MANAGER::updateData() {

    string Accountent_name1, Accountent_username1, Accountent_password1;
    int Accountent_pin1;
    int update_id = searchData();

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     YOU WANT TO DELETE ACCOUNTENT DATA      "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  FOR YES PRESS (Y/y) OR FOR NO PRESS (N/n)  "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    cout<< "\t\t\t\t\t\t ENTER (Y/y) OR (N/n) : ";
    cin >> choice;

    if (choice == 89 || choice == 121) {
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     ENTER ACCOUNTENT NEW DATA TO UPDATE     "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

        cout << "\t\t\t\t\t    ENTER FULL NAME : ";
        cin.get();
        getline(cin, Accountent_name1);
        cout << "\t\t\t\t\t    ENTER USERNAME : ";
        cin >> Accountent_username1;
        cout << "\t\t\t\t\t    ENTER PASSWORD : ";
        cin >> Accountent_password1;
        cout << "\t\t\t\t\t    ENTER PIN NUMBER : ";
        cin >> Accountent_pin1;

        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("Accountent.txt");
        while (!read.eof()) {
            read >> Accountent_id;
            read.ignore();
            getline(read, Accountent_name);
            read >> Accountent_username;
            read >> Accountent_password;
            read >> Accountent_pin;
            if (Accountent_id != update_id) {
                tempFile << "\n" << Accountent_id;
                tempFile << "\n" << Accountent_name;
                tempFile << "\n" << Accountent_username;
                tempFile << "\n" << Accountent_password;
                tempFile << "\n" << Accountent_pin;
            }
            else {
                tempFile << "\n" << Accountent_id;
                tempFile << "\n" << Accountent_name1;
                tempFile << "\n" << Accountent_username1;
                tempFile << "\n" << Accountent_password1;
                tempFile << "\n" << Accountent_pin1;
            }
        }
        read.close();
        tempFile.close();
        remove("Accountent.txt");
        rename("temp.txt", "Accountent.txt");

        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"    ACCOUNTENT DATA UPDATED SUCCESSFULLY     "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }
    else
    {
        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"        ACCOUNTANT DATA IS NOT UPDATED       "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     PRESS ANY KEY TO RETURN ADMIN MENU      "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
    getch();
}



//// ACCOUNTATN CLASS START

class CURRENTACCOUNTENT : public BMS  {
    char choice;
    string accountType = "C";
    int accountNumber, depositAmount, withdrawAmount, accountBalance = 1000, accountBalance1, accountBalance2;
    string accountName, parentsName, accountAddress, accountGmail, accountContact;
    float accountIR = 4.2;
    int accountOPD = 20210614;
public:
    void add_currentAccount();
    void print();
    //void print1();
    void readData();
    void printDeposit();
    void amountDeposit();
    void printWithdraw();
    void amountWithdraw();
    void depositDetails();
    void withdrawDetails();
    void currentAccountList();
    void currentAccountTable();
    int searchData();
    //void searchData1();
    void deleteData();
    void updateData();
};

void  CURRENTACCOUNTENT::add_currentAccount() {

    createID_loop:

    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"            CREATE NEW ACCOUNT HOLDER        "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout << "\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    ofstream write;
    write.open("currentAccount_id.txt");
    write << CURRENTACCOUNT_ID;

    ifstream read;
    read.open("currentAccount_id.txt");
    read >> CURRENTACCOUNT_ID;

    cout << "\t\t\t\t\t    ACCOUNT NUMBER : " << CURRENTACCOUNT_ID;
    cout << "\n\t\t\t\t\t    FULL NAME : ";
    cin.get();
    getline(cin, accountName);
    cout << "\t\t\t\t\t    PARENTS NAME : ";
    cin.peek();
    getline(cin, parentsName);
    cout << "\t\t\t\t\t    ADDRESS : ";
    cin >> accountAddress;
    cout << "\t\t\t\t\t    MOBILE NO. : ";
    cin >> accountContact;
    cout << "\t\t\t\t\t    GMAIL ID : ";
    cin.get();
    getline(cin, accountGmail);

    read.close();
    write.close();

    write.open("currentAccount.txt", ios::app);
    write << "\n" << CURRENTACCOUNT_ID;
    write << "\n" << accountName;
    write << "\n" << parentsName;
    write << "\n" << accountAddress;
    write << "\n" << accountContact;
    write << "\n" << accountGmail;
    write << "\n" << accountType;
    write << "\n" << accountBalance;
    write << "\n" << accountIR;
    write << "\n" << year;
    write << "\n" << month;
    write << "\n" << day;
    write.close();
    CURRENTACCOUNT_ID++;

  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"             DATA SAVE IN  FILE              "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";

  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     YOU WANT TO CREATE ANOTHER ACCOUNT      "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  FOR YES PRESS (Y/y) OR FOR NO PRESS (N/n)  "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;


    cout<< "\n\n\t\t\t\t\t\t ENTER (Y/y) OR (N/n) : ";
    cin >> choice;
    if (choice == 89 || choice == 121)
    {
        system("cls");
        goto createID_loop;
    }
    else
    {
        cout<<"\n\n\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	    cout<<"\t\t\t\t\t"<<design<<"   PRESS ANY KEY TO RETURN ACCOUNTENT MENU   "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        getch();
    }
}


int CURRENTACCOUNTENT::searchData() {

    int search_id;
    cout << "\n\t\t\t\t\t\t ACCOUNT NUMBER : ";
    cin >> search_id;
    ifstream read;
    read.open("currentAccount.txt");
    while (!read.eof()) {
        read >> accountNumber;
        read.ignore();
        getline(read, accountName);
        getline(read, parentsName);
        read >> accountAddress;
        read >> accountContact;
        read >> accountGmail;
        read >> accountType;
        read >> accountBalance;
        read >> accountIR;
        read >> year;
        read >> month;
        read >> day;
        if (accountNumber == search_id) {
                CURRENTACCOUNTENT::print();
                return search_id;
        }
    }
}



void CURRENTACCOUNTENT::print() {

    cout << "\t\t\t\t\t\t FULL NAME IS : " << accountName;
    cout << "\n\t\t\t\t\t\t PARENTS NAME IS: " << parentsName;
    cout << "\n\t\t\t\t\t\t ADDRESS IS : " << accountAddress;
    cout << "\n\t\t\t\t\t\t MOBILE NO. IS : " << accountContact;
    cout << "\n\t\t\t\t\t\t GMAIL ID IS: " << accountGmail;
    cout << "\n\t\t\t\t\t\t ACCOUNT TYPE IS : " << accountType;
    cout << "\n\t\t\t\t\t\t BALANCE IS : " << accountBalance;
    cout << "\n\t\t\t\t\t\t INTREST RATE IS: " << accountIR;
    cout << "\n\t\t\t\t\t\t ACCOUNT OPEN DATE IS : " << year << "/" << month << "/" << day;
    cout << "\n";
}

void CURRENTACCOUNTENT::readData() {

    system("cls");
    ifstream read;
    read.open("currentAccount.txt");
    while (!read.eof()) {
        read >> accountNumber;
        read.ignore();
        getline(read, accountName);
        getline(read, parentsName);
        read >> accountAddress;
        read >> accountContact;
        read >> accountGmail;
        read >> accountType;
        read >> accountBalance;
        read >> accountIR;
        read >> year;
        read >> month;
        read >> day;
        CURRENTACCOUNTENT::print();
    }
    read.close();
}


void CURRENTACCOUNTENT::amountDeposit() {

    int deposit_id = searchData();

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"         YOU WANT TO DEPOSIT AMOUNT          "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  FOR YES PRESS (Y/y) OR FOR NO PRESS (N/n)  "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    cout<< "\t\t\t\t\t\t ENTER (Y/y) OR (N/n) : ";
    cin >> choice;

    if (choice == 89 || choice == 121) {
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"           ENTER AMOUNT TO DEPOSIT           "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

            cout << "\t\t\t\t\t\t    BALANCE : ";
            cin >> accountBalance1;

            accountBalance2 = accountBalance1 + accountBalance;

            ofstream write;
            write.open("Deposit_Details.txt", ios::app);
            write << "\n" << accountNumber;
            write << "\n" << accountName;
            write << "\n" << year;
            write << "\n" << month;
            write << "\n" << day;
            write << "\n" << hour ;
            write << "\n" << minu ;
            write << "\n" << sec ;
            write << "\n" << accountType;
            write << "\n" << accountBalance ;
            write << "\n" << accountBalance1 ;
            write << "\n" << accountBalance2 ;
            write.close();

            ofstream tempFile;
            tempFile.open("temp.txt");
            ifstream read;
            read.open("currentAccount.txt");
            while (!read.eof()) {
                read >> accountNumber;
                read.ignore();
                getline(read, accountName);
                getline(read, parentsName);
                read >> accountAddress;
                read >> accountContact;
                read >> accountGmail;
                read >> accountType;
                read >> accountBalance;
                read >> accountIR;
                read >> year;
                read >> month;
                read >> day;
                if (accountNumber != deposit_id) {
                    tempFile << "\n" << accountNumber;
                    tempFile << "\n" << accountName;
                    tempFile << "\n" << parentsName;
                    tempFile << "\n" << accountAddress;
                    tempFile << "\n" << accountContact;
                    tempFile << "\n" << accountGmail;
                    tempFile << "\n" << accountType;
                    tempFile << "\n" << accountBalance;
                    tempFile << "\n" << accountIR;
                    tempFile << "\n" << year;
                    tempFile << "\n" << month;
                    tempFile << "\n" << day;
                }
                else {
                    tempFile << "\n" << accountNumber;
                    tempFile << "\n" << accountName;
                    tempFile << "\n" << parentsName;
                    tempFile << "\n" << accountAddress;
                    tempFile << "\n" << accountContact;
                    tempFile << "\n" << accountGmail;
                    tempFile << "\n" << accountType;
                    tempFile << "\n" << accountBalance2;
                    tempFile << "\n" << accountIR;
                    tempFile << "\n" << year;
                    tempFile << "\n" << month;
                    tempFile << "\n" << day;
            }
        }
        read.close();
        tempFile.close();
        remove("currentAccount.txt");
        rename("temp.txt", "currentAccount.txt");

        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"  AMOUNT DEPOSITED IN ACCOUNT SUCCESSFULLY   "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;

        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<" PRESS ANY KEY TO PRINT TRANSACTION DETAILS  "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        getch();

        system("cls");
        cout<< "\n\n\n";
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"               TRANSACTION SLIP              "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        CURRENTACCOUNTENT::printDeposit();
    }
    else
    {
        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"      AMOUNT IS NOT DEPOSITED IN ACCOUNT     "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }
}

void CURRENTACCOUNTENT::printDeposit() {

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    cout << "\t\t\t\t\t\t ACCOUNT NUMBER IS : " << accountNumber;
    cout << "\n\t\t\t\t\t\t FULL NAME IS : " << accountName;
    cout << "\n\t\t\t\t\t\t DEPOSIT DATE IS : " << year << "/" << month << "/" << day;
    cout << "\n\t\t\t\t\t\t DEPOSIT TIME IS : " << hour << ":" << minu << ":" << sec;
    cout << "\n\t\t\t\t\t\t ACCOUNT TYPE IS : " << accountType;
    cout << "\n\t\t\t\t\t\t BEFORE DEPOSIT BALANCE IS : " << accountBalance;
    cout << "\n\t\t\t\t\t\t DEPOSIT AMOUNT IS : " << accountBalance1;
    cout << "\n\t\t\t\t\t\t CURRENT BALANCE IS : " << accountBalance2;

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
}

void CURRENTACCOUNTENT::depositDetails() {
    system("cls");
    cout<<"\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"              DEPOSIT DETAILS               "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;

    ifstream read;
    read.open("Deposit_Details.txt");

    while (!read.eof()) {
        read >> accountNumber;
        read.ignore();
        getline(read, accountName);
        read >> year;
        read >> month;
        read >> day;
        read >> hour;
        read >> minu;
        read >> sec;
        read >> accountType;
        read >> accountBalance;
        read >> accountBalance1;
        read >> accountBalance2;
        CURRENTACCOUNTENT::printDeposit();

    }
    read.close();
}


void CURRENTACCOUNTENT::amountWithdraw() {

    int withdraw_id = searchData();

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"        YOU WANT TO WITHDRAW AMOUNT          "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  FOR YES PRESS (Y/y) OR FOR NO PRESS (N/n)  "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    cout<< "\t\t\t\t\t\t ENTER (Y/y) OR (N/n) : ";
    cin >> choice;

    if (choice == 89 || choice == 121) {
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"           ENTER AMOUNT TO DEPOSIT           "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

            cout << "\t\t\t\t\t\t    BALANCE : ";
            cin >> accountBalance1;

            accountBalance2 = accountBalance - accountBalance1;

            ofstream write;
            write.open("Withdraw_Details.txt", ios::app);
            write << "\n" << accountNumber;
            write << "\n" << accountName;
            write << "\n" << year;
            write << "\n" << month;
            write << "\n" << day;
            write << "\n" << hour ;
            write << "\n" << minu ;
            write << "\n" << sec ;
            write << "\n" << accountType;
            write << "\n" << accountBalance ;
            write << "\n" << accountBalance1 ;
            write << "\n" << accountBalance2 ;
            write.close();

            ofstream tempFile;
            tempFile.open("temp.txt");
            ifstream read;
            read.open("currentAccount.txt");
            while (!read.eof()) {
                read >> accountNumber;
                read.ignore();
                getline(read, accountName);
                getline(read, parentsName);
                read >> accountAddress;
                read >> accountContact;
                read >> accountGmail;
                read >> accountType;
                read >> accountBalance;
                read >> accountIR;
                read >> year;
                read >> month;
                read >> day;
                if (accountNumber != withdraw_id) {
                    tempFile << "\n" << accountNumber;
                    tempFile << "\n" << accountName;
                    tempFile << "\n" << parentsName;
                    tempFile << "\n" << accountAddress;
                    tempFile << "\n" << accountContact;
                    tempFile << "\n" << accountGmail;
                    tempFile << "\n" << accountType;
                    tempFile << "\n" << accountBalance;
                    tempFile << "\n" << accountIR;
                    tempFile << "\n" << year;
                    tempFile << "\n" << month;
                    tempFile << "\n" << day;
                }
                else {
                    tempFile << "\n" << accountNumber;
                    tempFile << "\n" << accountName;
                    tempFile << "\n" << parentsName;
                    tempFile << "\n" << accountAddress;
                    tempFile << "\n" << accountContact;
                    tempFile << "\n" << accountGmail;
                    tempFile << "\n" << accountType;
                    tempFile << "\n" << accountBalance2;
                    tempFile << "\n" << accountIR;
                    tempFile << "\n" << year;
                    tempFile << "\n" << month;
                    tempFile << "\n" << day;
            }
        }
        read.close();
        tempFile.close();
        remove("currentAccount.txt");
        rename("temp.txt", "currentAccount.txt");

        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"  AMOUNT WITHDRAW FROM ACCOUNT SUCCESSFULLY  "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;

        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<" PRESS ANY KEY TO PRINT TRANSACTION DETAILS  "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        getch();

        system("cls");
        cout<< "\n\n\n";
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"               TRANSACTION SLIP              "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        CURRENTACCOUNTENT::printDeposit();
    }
    else
    {
        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"     AMOUNT IS NOT WITHDRAW FROM ACCOUNT     "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }
}



void CURRENTACCOUNTENT::printWithdraw() {

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    cout << "\t\t\t\t\t\t ACCOUNT NUMBER IS : " << accountNumber;
    cout << "\n\t\t\t\t\t\t FULL NAME IS : " << accountName;
    cout << "\n\t\t\t\t\t\t WITHDRAW DATE IS : " << year << "/" << month << "/" << day;
    cout << "\n\t\t\t\t\t\t WITHDRAW TIME IS : " << hour << ":" << minu << ":" << sec;
    cout << "\n\t\t\t\t\t\t ACCOUNT TYPE IS : " << accountType;
    cout << "\n\t\t\t\t\t\t BEFORE WITHDRAW BALANCE IS : " << accountBalance;
    cout << "\n\t\t\t\t\t\t WITHDRAW AMOUNT IS : " << accountBalance1;
    cout << "\n\t\t\t\t\t\t CURRENT BALANCE IS : " << accountBalance2;

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
}


void CURRENTACCOUNTENT::withdrawDetails() {

    system("cls");
    cout<<"\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"              WITHDRAW DETAILS               "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;

    ifstream read;
    read.open("Withdraw_Details.txt");
    while (!read.eof()) {
        read >> accountNumber;
        read.ignore();
        getline(read, accountName);
        read >> year;
        read >> month;
        read >> day;
        read >> hour;
        read >> minu;
        read >> sec;
        read >> accountType;
        read >> accountBalance;
        read >> accountBalance1;
        read >> accountBalance2;
        CURRENTACCOUNTENT::printWithdraw();
    }
    read.close();
}


void CURRENTACCOUNTENT::currentAccountList() {


    cout<<"\t"<<design;
    cout << setw(15);
    cout  << accountNumber ;

    cout << setw(25);
    cout << accountName ;

    cout << setw(25);
    cout << parentsName;

    cout << setw(15);
    cout << accountBalance ;


    cout << setw(8);
    cout << accountType ;

    cout << setw(15);
    cout << accountIR;


    cout << setw(13);
    cout << year << "/" << month << "/" << day ;

    cout<<"     "<<design<<endl;

}


void CURRENTACCOUNTENT::currentAccountTable(){

    system("cls");
    ifstream read;
    read.open("currentAccount.txt");
	if(!read)
	{
		cout<<"\n\n\n\t\t\t\t\t File could not be open !! Press any Key...";
		return;
	}
	else
    {
        cout<<"\n\n\n\n\n\n";
  	cout<<"\t";
    for(int i=0;i<=127;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t"<<design<<"                                                                                                                              "<<design<<endl;
  	cout<<"\t"<<design<<"                                                  ACCOUNT HOLDER LIST                                                         "<<design<<endl;
  	cout<<"\t"<<design<<"                                                                                                                              "<<design<<endl;
  	cout<<"\t";
  	for(int i=0;i<=127;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t"<<design<<"                                                                                                                              "<<design<<endl;
  	cout<<"\t"<<design<<"         A/c NO.              FULL NAME               PARENTS NAME       BALANCE    A/c TYPE        IR        A/c OPEN DATE   "<<design<<endl;
  	cout<<"\t"<<design<<"                                                                                                                              "<<design<<endl;

	while (!read.eof()) {
        read >> accountNumber;
        read.ignore();
        getline(read, accountName);
        getline(read, parentsName);
        read >> accountAddress;
        read >> accountContact;
        read >> accountGmail;
        read >> accountType;
        read >> accountBalance;
        read >> accountIR;
        read >> year;
        read >> month;
        read >> day;
        CURRENTACCOUNTENT::currentAccountList();
	}
	cout<<"\t"<<design<<"                                                                                                                              "<<design<<endl;
  	cout<<"\t";
  	for(int i=0;i<=127;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t"<<design<<"                                                                                                                              "<<design<<endl;
  	cout<<"\t"<<design<<"                                          PRESS ANY KEY TO RETURN ACCOUNTENT MENU                                             "<<design<<endl;
  	cout<<"\t"<<design<<"                                                                                                                              "<<design<<endl;
  	cout<<"\t";
  	for(int i=0;i<=127;i++)
  	cout<<design;
    }
	read.close();
	getch();

}


void CURRENTACCOUNTENT::deleteData() {

    int delete_id = searchData();

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"       YOU WANT TO DELETE ACCOUNT DATA       "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  FOR YES PRESS (Y/y) OR FOR NO PRESS (N/n)  "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    cout<< "\t\t\t\t\t\t ENTER (Y/y) OR (N/n) : ";
    cin >> choice;
    if (choice == 89 || choice == 121) {
        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("currentAccount.txt");
        while (!read.eof()) {
                read >> accountNumber;
                read.ignore();
                getline(read, accountName);
                getline(read, parentsName);
                read >> accountAddress;
                read >> accountContact;
                read >> accountGmail;
                read >> accountType;
                read >> accountBalance;
                read >> accountIR;
                read >> year;
                read >> month;
                read >> day;
                if (accountNumber != delete_id) {
                    tempFile << "\n" << accountNumber;
                    tempFile << "\n" << accountName;
                    tempFile << "\n" << parentsName;
                    tempFile << "\n" << accountAddress;
                    tempFile << "\n" << accountContact;
                    tempFile << "\n" << accountGmail;
                    tempFile << "\n" << accountType;
                    tempFile << "\n" << accountBalance;
                    tempFile << "\n" << accountIR;
                    tempFile << "\n" << year;
                    tempFile << "\n" << month;
                    tempFile << "\n" << day;
            }
        }
        read.close();
        tempFile.close();
        remove("currentAccount.txt");
        rename("temp.txt", "currentAccount.txt");

        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"         ACCOUNT DELETED SUCCESSFULLY        "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }
    else
    {
        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"            ACCOUNT IS NOT DELETED           "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"   PRESS ANY KEY TO RETURN ACCOUNTENT MENU   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
    getch();
    BMS::Accountent_option();
}

void CURRENTACCOUNTENT::updateData() {


    string accountAddress1, accountGmail1, accountName1, parentsName1, accountContact1;

    int update_id = searchData();

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"      YOU WANT TO UPDATE ACCOUNT DATA        "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  FOR YES PRESS (Y/y) OR FOR NO PRESS (N/n)  "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    cout<< "\t\t\t\t\t\t ENTER (Y/y) OR (N/n) : ";
    cin >> choice;

    if (choice == 89 || choice == 121) {
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"      ENTER NEW ACCOUNT DATA TO UPDATE       "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

        cout << "\n\t\t\t\t\t    FULL NAME : ";
        cin.get();
        getline(cin, accountName1);
        cout << "\t\t\t\t\t    PARENTS NAME : ";
        cin.peek();
        getline(cin, parentsName1);
        cout << "\t\t\t\t\t    ADDRESS : ";
        cin.peek();
        getline(cin, accountAddress1);
        cout << "\t\t\t\t\t    MOBILE NO. : ";
        cin >> accountContact1;
        cout << "\t\t\t\t\t    GMAIL ID : ";
        cin.get();
        getline(cin, accountGmail1);

        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("currentAccount.txt");
        while (!read.eof()) {
                read >> accountNumber;
                read.ignore();
                getline(read, accountName);
                getline(read, parentsName);
                read >> accountAddress;
                read >> accountContact;
                read >> accountGmail;
                read >> accountType;
                read >> accountBalance;
                read >> accountIR;
                read >> year;
                read >> month;
                read >> day;
                if (accountNumber != update_id) {
                    tempFile << "\n" << accountNumber;
                    tempFile << "\n" << accountName;
                    tempFile << "\n" << parentsName;
                    tempFile << "\n" << accountAddress;
                    tempFile << "\n" << accountContact;
                    tempFile << "\n" << accountGmail;
                    tempFile << "\n" << accountType;
                    tempFile << "\n" << accountBalance;
                    tempFile << "\n" << accountIR;
                    tempFile << "\n" << year;
                    tempFile << "\n" << month;
                    tempFile << "\n" << day;
                }
                else {
                    tempFile << "\n" << accountNumber;
                    tempFile << "\n" << accountName1;
                    tempFile << "\n" << parentsName1;
                    tempFile << "\n" << accountAddress1;
                    tempFile << "\n" << accountContact1;
                    tempFile << "\n" << accountGmail1;
                    tempFile << "\n" << accountType;
                    tempFile << "\n" << accountBalance;
                    tempFile << "\n" << accountIR;
                    tempFile << "\n" << year;
                    tempFile << "\n" << month;
                    tempFile << "\n" << day;
            }
        }
        read.close();
        tempFile.close();
        remove("currentAccount.txt");
        rename("temp.txt", "currentAccount.txt");

        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"      ACCOUNT DATA UPDATED SUCCESSFULLY      "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;

        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"   PRESS ANY KEY TO PRINT ACCOUNT DETAILS    "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        getch();

        system("cls");
        cout<< "\n\n\n";
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
        cout<<"\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"             UPDEATED ACCOUNT SLIP           "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;

        cout << "\n\t\t\t\t\t    FULL NAME : " << accountName1;
        cout << "\n\t\t\t\t\t    PARENTS NAME : " << parentsName1;
        cout << "\n\t\t\t\t\t    ADDRESS : " << accountAddress1;
        cout << "\n\t\t\t\t\t    MOBILE NO. : " << accountContact1;
        cout << "\n\t\t\t\t\t    GMAIL ID : " << accountGmail1;
        cout << "\n\t\t\t\t\t    ACCOUNT TYPE : " << accountType;
        cout << "\n\t\t\t\t\t    BALANCE : " << accountBalance;
        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }
    else
    {
        cout << "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
  	    cout<<design;
  	    cout<< "\n";
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"           ACCOUNT DATA IS NOT UPDATED       "<<design<<endl;
        cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
        cout<<"\t\t\t\t\t";
        for(int i=0;i<=46;i++)
        cout<<design;
    }

  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"   PRESS ANY KEY TO RETURN ACCOUNTENT MENU   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
    getch();
}





/// THE MAIN FUNCTION OF PROGRAM


int main()
{
    system("color 0E");
    BMS BMS;
  	BMS.Welcome();
  	BMS.Login_option();
  	return 0;
}



/// FUNCTION OF MANAGER CLASS


void createAccountent()
{
    MANAGER manager;
    manager.addAccountent();
}

void displayAccountent()
{
    MANAGER manager;
    manager.MANAGER::accountentTable();
}

void searchAccountent()
{
    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"         TO SEARCH OR FIND USER DATA         "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"             ENTER ACCOUNTENT ID             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    MANAGER manager;
    manager.searchData();

    cout << "\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     PRESS ANY KEY TO RETURN ADMIN MENU      "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	getch();
}

void deleteAccountent()
{
    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  ENTER ACCOUNTANT ID TO DELETE ACCOUNTANT   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    MANAGER manager;
    manager.deleteData();
}

void updateAccountent()
{
    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"  ENTER ACCOUNTANT ID TO UPDATE ACCOUNTANT   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    MANAGER manager;
    manager.updateData();
}

void writeID()
{
    BMS bms;
    ofstream write;
    write.open("Accountent_id.txt");
    write << ACCOUNTENT_ID;
    write.close();
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
    cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"   LOGOUT SUCCESSFULL...!! PLEASE WAIT       "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	Sleep(1500);
    bms.Login_option();
}



/// FUNCTION OF CURRENTACCOUNT ACCOUNTENT CLASS

void create_currentAccount()
{
    CURRENTACCOUNTENT currentAccount;
    currentAccount.add_currentAccount();
}

void display_currentAccount()
{
    CURRENTACCOUNTENT currentAccount;
    currentAccount.currentAccountTable();
}

void search_currentAccount()
{
    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"   TO SEARCH OR FIND ACCOUNT HOLDER DETAILS  "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"             ENTER ACCOUNT NUMBER            "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    CURRENTACCOUNTENT currentAccount;
    currentAccount.searchData();

  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"   PRESS ANY KEY TO RETURN ACCOUNTENT MENU   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	getch();
}


void withdraw_currentAccount()
{
    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"   ENTER ACCOUNT NUMBER TO WITHDRAW AMOUNT   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;

    CURRENTACCOUNTENT currentAccount;
    currentAccount.amountWithdraw() ;

    cout << "\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"   PRESS ANY KEY TO RETURN ACCOUNTANT MENU   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
    getch();
}


void deposit_currentAccount()
{
    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"    ENTER ACCOUNT NUMBER TO DEPOSIT AMOUNT   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    CURRENTACCOUNTENT currentAccount;
    currentAccount.amountDeposit();

    cout << "\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"   PRESS ANY KEY TO RETURN ACCOUNTANT MENU   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
    getch();
}


void transaction1_currentAccount()
{
    CURRENTACCOUNTENT currentAccount;
    currentAccount.depositDetails();

    cout << "\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"      PRESS ANY KEY TO RETURN ADMIN MENU     "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
    getch();
}

void transaction2_currentAccount()
{
    CURRENTACCOUNTENT currentAccount;
    currentAccount.withdrawDetails();

    cout << "\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    cout<<"\t\t\t\t\t"<<design<<"      PRESS ANY KEY TO RETURN ADMIN MENU     "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
    getch();
}


void delete_currentAccount()
{
    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"    ENTER ACCOUNT NUMBER TO DELETE ACCOUNT   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    CURRENTACCOUNTENT currentAccount;
    currentAccount.deleteData();
}

void update_currentAccount()
{
    system("cls");
    cout<<"\n\n\n";
  	cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"    ENTER ACCOUNT NUMBER TO UPDATE ACCOUNT   "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
    CURRENTACCOUNTENT currentAccount;
    currentAccount.updateData();
}

void write_currentAccount_ID()
{
    BMS bms;
    ofstream write;
    write.open("currentAccount_id.txt");
    write << CURRENTACCOUNT_ID;
    write.close();
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t";
    for(int i=0;i<=46;i++)
    cout<<design;
  	cout<<"\n";
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"     LOGOUT SUCCESSFULL...!! PLEASE WAIT     "<<design<<endl;
  	cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	cout<<"\t\t\t\t\t";
  	for(int i=0;i<=46;i++)
  	cout<<design;
  	Sleep(1500);
    system("cls");
    bms.Login_option();
}



/****************************************************************/
///// LOGIN FUNCTION //////////////
/*****************************************************************/

void manager_login(){
      BMS BMS;
      int count;
      char select;
      string user,pass,u,p;
      BMS.Login_input();
      cout<<"\n\n";
      cout<<"\t\t\t\t\t\t";
      cout<<"USERNAME : ";
      cin>>user;
      cout<<"\t\t\t\t\t\t";
      cout<<"PASSWORD : ";
      cin>>pass;

      ifstream input("manager_login.txt");
      while(input>>u>>p)
      {
              if(u==user && p==pass)

              {
                      count=1;
                      system("cls");
              }
      }
      input.close();
      if(count==1)
      {
          BMS.Login_success();
          Sleep(1000);
          BMS.manager_option();

      }
      else
      {
          BMS.Login_Error();
          cout<<"\n\n\t\t\t\t\t\t Option : ";
          cin>>select;
          if(select == 121 || select==89)
          {
             manager_login();
          }
          else
          {
              BMS.Login_option();
          }
      }
}

void accountent_login(){
      BMS BMS;
      int count;
      char select;
      string user,pass,u,p;
      BMS.Login_input();
      cout<<"\n\n";
      cout<<"\t\t\t\t\t\t";
      cout<<"USERNAME : ";
      cin>>user;
      cout<<"\t\t\t\t\t\t";
      cout<<"PASSWORD : ";
      cin>>pass;

      ifstream input("Accountent_login.txt");
      while(input>>u>>p)
      {
              if(u==user && p==pass)

              {
                      count=1;
                      system("cls");
              }
      }
      input.close();
      if(count==1)
      {
          BMS.Login_success();
          Sleep(1000);
          BMS.Accountent_option();

      }
      else
      {
          BMS.Login_Error();
          cout<<"\n\n\t\t\t\t\t\t Option : ";
          cin>>select;
          if(select == 121 || select==89)
          {
             accountent_login();
          }
          else
          {
              BMS.Login_option();
          }
      }
}

void settingOption()
{
 char ch;
 BMS BMS;
 do
                {
                    system("cls");
                    cout<<"\n\n\n\n\n\n";
                    cout<<"\t\t\t\t\t";
                    for(int i=0;i<=39;i++)
                    cout<<design;
                    cout<<"\n";
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"             SETTING MENU             "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t";
                    for(int i=0;i<=39;i++)
                    cout<<design;
                    cout<<"\n";
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"   [1] CHANGE USERNAME AND PASSWORD   "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"   [2] RETURN ADMIN MENU              "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"   SELECT OPTION (1-2)                "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t";
                    for(int i=0;i<=39;i++)
                    cout<<design;
                    cout<<"\n\n\t\t\t\t\t\t OPTION : ";
                    cin>>ch;
                    system("cls");
                    switch(ch)
                    {
                        case '1':
                             changeUsername_managerAccount();
                        break;
                        case '2':
                            BMS.manager_option();
                        break;
                        default :
                            cout<<"\n\n\n\n\n\n";
                            cout<<"\t\t\t\t\t";
                            for(int i=0;i<=39;i++)
                            cout<<design;
                            cout<<"\n";
                            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                            cout<<"\t\t\t\t\t"<<design<<"     PLEASE SELECT OPTION 1 TO 2      "<<design<<endl;
                            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                            cout<<"\t\t\t\t\t";
                            for(int i=0;i<=39;i++)
                            cout<<design;
                            Sleep(2000);
                        }
                }while(ch!=2);
                getch();
}


void changeUsername_managerAccount(){
      BMS BMS;
      int count;
      char select;
      string user,pass,u,p;

      cout << "\n";
  	  cout<<"\t\t\t\t\t";
  	  for(int i=0;i<=46;i++)
  	  cout<<design;
  	  cout<<"\n";
  	  cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	  cout<<"\t\t\t\t\t"<<design<<" ENTER YOUR USERNAME AND PASSWORD TO CHANGE  "<<design<<endl;
  	  cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	  cout<<"\t\t\t\t\t";
  	  for(int i=0;i<=46;i++)
  	  cout<<design;

      cout<<"\n\n";
      cout<<"\t\t\t\t\t\t";
      cout<<"USERNAME : ";
      cin>>user;
      cout<<"\t\t\t\t\t\t";
      cout<<"PASSWORD : ";
      cin>>pass;

      ifstream input("manager_login.txt");
      while(input>>u>>p)
      {
              if(u==user && p==pass)

              {
                      count=1;
                      system("cls");
              }
      }
      input.close();
      if(count==1)
      {
          string name,reguser,regpass;
          cout<<"\n\n\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;
          cout<<"\n";
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"  ENTER NEW USERNAME AND PASSWORD TO CHANGE  "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;
          cout<<"\n\n\t\t\t\t\t\t USERNAME : ";
          cin>>reguser;
          cout<<"\t\t\t\t\t\t PASSWORD : ";
          cin>>regpass;
          ofstream reg("manager_login.txt",ios::app);
          reg<<reguser<<' '<<regpass<<endl;

          cout << "\n";
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;
          cout<<"\n";
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"   USERNAME AND PASSWORD CHANGE SUCCESSFUL   "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;

            cout << "\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"     PRESS ANY KEY TO RETURN SETTING MENU    "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            getch();
            settingOption();
      }
      else
      {
          cout << "\n\n";
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;
          cout<<"\n";
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"   USERNAME AND PASSWORD IS NOT FOUND        "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;


            cout << "\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"     PRESS ANY KEY TO RETURN SETTING MENU    "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            getch();
            settingOption();
          }

            cout << "\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"      PRESS ANY KEY TO RETURN ADMIN MENU     "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            getch();
            BMS.manager_option();
}



void settingOption1()
{
 char ch;
 BMS BMS;
 do
                {
                    system("cls");
                    cout<<"\n\n\n\n\n\n";
                    cout<<"\t\t\t\t\t";
                    for(int i=0;i<=39;i++)
                    cout<<design;
                    cout<<"\n";
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"             SETTING MENU             "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t";
                    for(int i=0;i<=39;i++)
                    cout<<design;
                    cout<<"\n";
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"   [1] CHANGE USERNAME AND PASSWORD   "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"   [2] RETURN ADMIN MENU              "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"   SELECT OPTION (1-2)                "<<design<<endl;
                    cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                    cout<<"\t\t\t\t\t";
                    for(int i=0;i<=39;i++)
                    cout<<design;
                    cout<<"\n\n\t\t\t\t\t\t OPTION : ";
                    cin>>ch;
                    system("cls");
                    switch(ch)
                    {
                        case '1':
                             changeUsername_currentAccount();
                        break;
                        case '2':
                            BMS.manager_option();
                        break;
                        default :
                            cout<<"\n\n\n\n\n\n";
                            cout<<"\t\t\t\t\t";
                            for(int i=0;i<=39;i++)
                            cout<<design;
                            cout<<"\n";
                            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                            cout<<"\t\t\t\t\t"<<design<<"     PLEASE SELECT OPTION 1 TO 2      "<<design<<endl;
                            cout<<"\t\t\t\t\t"<<design<<"                                      "<<design<<endl;
                            cout<<"\t\t\t\t\t";
                            for(int i=0;i<=39;i++)
                            cout<<design;
                            Sleep(2000);
                        }
                }while(ch!=2);
                getch();
}


void changeUsername_currentAccount(){
      BMS BMS;
      int count;
      char select;
      string user,pass,u,p;

      cout << "\n";
  	  cout<<"\t\t\t\t\t";
  	  for(int i=0;i<=46;i++)
  	  cout<<design;
  	  cout<<"\n";
  	  cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	  cout<<"\t\t\t\t\t"<<design<<" ENTER YOUR USERNAME AND PASSWORD TO CHANGE  "<<design<<endl;
  	  cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
  	  cout<<"\t\t\t\t\t";
  	  for(int i=0;i<=46;i++)
  	  cout<<design;

      cout<<"\n\n";
      cout<<"\t\t\t\t\t\t";
      cout<<"USERNAME : ";
      cin>>user;
      cout<<"\t\t\t\t\t\t";
      cout<<"PASSWORD : ";
      cin>>pass;

      ifstream input("Accountent_login.txt");
      while(input>>u>>p)
      {
              if(u==user && p==pass)

              {
                      count=1;
                      system("cls");
              }
      }
      input.close();
      if(count==1)
      {
          string name,reguser,regpass;
          cout<<"\n\n\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;
          cout<<"\n";
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"  ENTER NEW USERNAME AND PASSWORD TO CHANGE  "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;
          cout<<"\n\n\t\t\t\t\t\t USERNAME : ";
          cin>>reguser;
          cout<<"\t\t\t\t\t\t PASSWORD : ";
          cin>>regpass;
          ofstream reg("Accountent_login.txt",ios::app);
          reg<<reguser<<' '<<regpass<<endl;

          cout << "\n";
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;
          cout<<"\n";
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"   USERNAME AND PASSWORD CHANGE SUCCESSFUL   "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;

            cout << "\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"     PRESS ANY KEY TO RETURN SETTING MENU    "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            getch();
            settingOption();
      }
      else
      {
          cout << "\n\n";
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;
          cout<<"\n";
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"   USERNAME AND PASSWORD IS NOT FOUND        "<<design<<endl;
          cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
          cout<<"\t\t\t\t\t";
          for(int i=0;i<=46;i++)
          cout<<design;


            cout << "\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"     PRESS ANY KEY TO RETURN SETTING MENU    "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            getch();
            settingOption();
          }

            cout << "\n";
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"      PRESS ANY KEY TO RETURN ADMIN MENU     "<<design<<endl;
            cout<<"\t\t\t\t\t"<<design<<"                                             "<<design<<endl;
            cout<<"\t\t\t\t\t";
            for(int i=0;i<=46;i++)
            cout<<design;
            getch();
            BMS.Accountent_option();
}
