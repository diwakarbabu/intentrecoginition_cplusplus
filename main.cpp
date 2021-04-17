#include "header.h"

//using namespace std;

int main()
{
    string intent;
    cout<<"Please enter your question: ";
    getline(cin,intent);
    //std::cout<<intent<<"\n";
    if(regex_search(intent, weather))
    {
        if(regex_search(intent,city))
        {
            cout<<"Intent: Get Weather in City \n";
        }
        else
        cout<<"Intent: Get Weather \n";
    }
    else if(regex_search(intent,fact))
    {
        cout<<"Intent: Get fact \n";
    }
    else if(regex_search(intent,check) || regex_search(intent,date))
    {
        cout<<"Checks Calander \n";
    }
    else
    {
        cout<<"Sorry wrong input \n";
    }
    //std::cout<<"Hello \n";
    return 0;
}