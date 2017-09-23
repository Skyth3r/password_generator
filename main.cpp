#include <iostream>
// #include <ctime>
using namespace std;
int main() {
    string pwd = "~1m@kabls!@po7$e0%4^§9&wn)}ck-3c8n_*z0d]v0(3mz[p=xoe+ai|2fy4ksld}jg>0hxknc0oaj6/5jqn<o?w";
    string password;
    srand(time(NULL));
    int x;

    cout<<"how long do you want your password? (6-20): ";
    cin>>x;

    cout<<"Password: ";

    for(int i=0; i<x; i++) {
        password += pwd[rand()%39];
        cout<<password[i];
    }

    cout<<endl;
    return 0;
}
