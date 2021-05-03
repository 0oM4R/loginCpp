#include <bits/stdc++.h>

using namespace std;
string username;
bool IsLoggedIn(){
    string  password, un ,pw;
    cout<< "Username: ";
    cin>> username;
    cout<< "Password: ";
    cin>> password;
    ifstream read( username + ".txt");
    getline(read,un);
    getline(read,pw);
    if (username.compare(un)==0 && password.compare(pw)==0){
        return true;
    } else {
        return false;
    }

}
int main() {

    char choice;
    cout << "For login please type l, for register please type r, and for exit type e.\nl||r||e :";
    cin >> choice;
    if(choice =='r'){
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;
        ofstream file;
        file.open(username+ ".txt");
        file<<username<<endl<<password;
        file.close();
        cout<<"Succeed!\n";
        main();
    }else if(choice =='l') {
        bool flag=IsLoggedIn();
        if(flag){
            cout<< "Logged in, Wellcome "<<username<<"!\n";
            return 1;
        }else {
            cout<<"The username or password is incorrect please try again.\n";
            main();
        }

    }else if (choice=='e'){
        cout<<"Program exited.\n";
    }else{
        cout<<"Wrong input!\ntry again\n";
        main();
    }
    return 0;
}
