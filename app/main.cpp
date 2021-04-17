#include "header.h"

int main()
{
    string intent;
    cout<<"Please enter your question: ";
    getline(cin,intent);
    return checkintent(intent);
}