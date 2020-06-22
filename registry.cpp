#include <iostream>
#include <string>

using namespace std;
int registry(string username, string password)
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
    registry(username, password);
    return 0;
}