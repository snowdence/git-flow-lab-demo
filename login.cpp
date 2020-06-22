#include <iostream>
#include <string>

using namespace std;
int login(string username, string password)
{
    if(username == "admin" && password =="pass"){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string username = "admin";
    string password = "pass";
    login(username, password);
    return 0;
}