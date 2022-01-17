Nama : Yusna
Prodi : IF MALAM
Matkul : DDP_UAS

Program : LOGIN & SIGN UP FORM


#include <iostream>
#include <string>

using namespace std;


// Membuar login & signup form 
// 1. User login, invalid -> Go to signup.
// 2. User create account, succesfully -> Go to login.
// 3. User login again, succesfully -> back to program menu.
// 4. user exit program.

int main()
{
    //Deklarasi variabel yang diperlukan
	string lPass, lEmail, sEmail, sPass, cPass, fName, answer, input0, input1, input2;
	int choose;
	
	    menu : //MENU
	    system ("clear");
        cout << " .............................................. \n";
        cout << ":                 PROGRAM MENU                 :\n";
        cout << ":..............................................:\n";
        cout << ": 1. Login                                     :\n";
        cout << ": 2. Sign Up                                   :\n";
        cout << ": 3. Exit                                      :\n";
        cout << ":..............................................:\n\n";
        cout << "Choose = "; 
        cin >> choose;
        cout << endl;
        
             switch (choose)
            {
                case 1 : //LOGIN
                login :
                system ("clear");
               	cout << " ...............................................\n";
                cout << ":                  LOGIN FORM                   :\n";
                cout << ":...............................................:\n\n";  
                
                repeat1 :
                cout << "Email    : "; 
                cin >> lEmail;
                cout << "Password : "; 
                cin >> lPass;
                cout << endl;
                
                    if (lEmail != sEmail && lPass != sPass) 
                    {
                       cout << "Couldn't find your account!\n";
                       cout << "Create Account ? "; 
                       cin >> input0;
                       goto signUp;
                    } else if (lEmail != sEmail && lPass == sPass || lEmail == sEmail && lPass != sPass) 
                    {
                      cout << "The email address or password is incorrect.\n";
                      goto repeat1;
                    } else 
                    {
                       cout << "Login Successful! Welcome back " << lEmail;
                       cout << endl;
                       cout << endl;
                       cout << "Back ? "; 
                       cin >> input1;
                       goto menu; 
                    } break;
                    
                case 2 : //SIGN UP
                signUp :
                system ("clear");
                cout << " ...............................................\n";
                cout << ":                 SIGN UP FORM                 :\n";
                cout << ":..............................................:\n\n";  
                cout << "Create your account by filling the form below.\n";

                cout << "Full name : "; 
                cin >> fName;
                cout << "Email     : "; 
                cin >> sEmail;
                repeat :
                cout << "Password  : "; 
                cin >> sPass;
                cout << "Confirm   : "; 
                cin >> cPass;
                cout << endl;
                
                    if(sPass != cPass)
                    {
                    cout << "Password & confirm password does not match.\n";
                    goto repeat;
                    } else if (sPass == cPass)
                    {
                    cout << "Sign Up Complete! Welcome " <<sEmail;
                    cout << "Back ? "; 
                    cin >> input2;
                    goto menu;
                    } break;
                                
                case 3 : //EXIT
                cout << "Are you sure want to exit ? "; 
                cin >> answer;
                cout << endl;
                system ("clear");
                cout << "Exit Succesfully"; 
                break;
                				
                default : 
                cout << "Sorry, but the page you are looking for is not found.";
                break;
                }
                
        return 0;
    }




