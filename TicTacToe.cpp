#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;



void table(char[]);                       //function prototype


int main() {

   
    char get_user[9] = { '0','1','2','3','4','5','6','7','8' };
    int num;

    table(get_user);           //first call Print function for print table to show to user

    cout << endl << endl << endl;

    cout << "player 1 <x>" << endl;
    cout << "player 2 <o>" << endl;

    

        

        for (int i = 0; i<9 ; i++) {

            //////////////////////////////////////////////////////////////
            if (get_user[0] == get_user[1] && get_user[2]==get_user[0] ) {

                cout << "player " << get_user[0] << " is win !" << endl;
                break;
            }
            if (get_user[3] == get_user[4] && get_user[5]==get_user[3] ) {

                cout << "player " << get_user[5] << " is win !" << endl;
                break;

            }
            if (get_user[6] == get_user[7] && get_user[8]==get_user[7] ) {

                cout << "player " << get_user[6] << " is win !" << endl;
                break;
                                                                                     //Conditions
            }
             if (get_user[0] == get_user[4] && get_user[8]==get_user[0] ) {
                cout << "player " << get_user[4] << " is win !" << endl;
                break;
            }
             if (get_user[0] == get_user[3] && get_user[6]==get_user[0] ) {
                cout << "player " << get_user[3] << " is win !" << endl;
                break;
            }
             if (get_user[1] == get_user[4] &&  get_user[7]==get_user[1] ) {
                cout << "player " << get_user[4] << " is win !" << endl;
                break;
            }
             if (get_user[2] == get_user[5] &&  get_user[8]==get_user[2]) {
                cout << "player " << get_user[5] << " is win !" << endl;
                break;
            }
            ///////////////////////////////////////////////////////////////

            if (i % 2 == 0) {
                cout << "player 1 : " << endl;
                cin >> num;
                get_user[num] = 'x';
                system("cls");
                table(get_user);
                
            }
            else if (i % 2 != 0) {
                cout << "player 2 : " << endl;
                cin >> num;
                get_user[num] = 'o';
                system("cls");                             //clear screen
                table(get_user);                          //call print function
               
            }
            
        }

        Sleep(5000);                                      //sleep for 5000 M-seconds

    
}

void table(char x[]) {

   
    //Print Function

    cout << setw(40) << x[0] << setw(5) << "|   " << x[1] << setw(5) << '|' << setw(5) << x[2] << endl;
    cout << setw(42) << '|' << setw(9) << '|' << setw(6) << endl;
    cout << setw(60) << "-------------------------" << endl;
    cout << setw(40) << x[3] << setw(5) << "|   " << x[4] << setw(5) << '|' << setw(5) << x[5] << endl;
    cout << setw(42) << '|' << setw(9) << '|' << setw(6) << endl;
    cout << setw(60) << "-------------------------" << endl;
    cout << setw(40) << x[6] << setw(5) << "|   " << x[7] << setw(5) << '|' << setw(5) << x[8] << endl;
    cout << setw(42) << '|' << setw(9) << '|' << setw(6) << endl;

    cout << endl;

}

