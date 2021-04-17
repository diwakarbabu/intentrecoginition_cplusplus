#include "header.h"

//using namespace std;

int main()
{
    std::string intent;
    std::cout<<"Please enter your question: ";
    std::getline(std::cin,intent);
    //std::cout<<intent<<"\n";
    if(std::regex_search(intent, weather))
    {
        if(std::regex_search(intent,city))
        {
            std::cout<<"Intent: Get Weather in City \n";
        }
        else
        std::cout<<"Intent: Get Weather \n";
    }
    else if(std::regex_search(intent,fact))
    {
        std::cout<<"Intent: Get fact \n";
    }
    else if(std::regex_search(intent,check))
    {
        std::cout<<"Checks Calander \n";
    }
    else
    {
        std::cout<<"Sorry wrong input \n";
    }
    //std::cout<<"Hello \n";
    return 0;
}