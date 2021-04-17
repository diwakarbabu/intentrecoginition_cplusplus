#include <iostream>
#include <regex>
#include<string.h>

//using namespace std;

//Init - Set of regular expression variables

//To check weather - keywords include Weather, Climate, Temperature, Rain, Sunny, Snowy,
std::regex weather("[wW]eather|[tT]emperature|[rR]ain|[Ss]unny|[cC]limate|[sS]nowy");

//To check city - only after checking weather - keyword include in, city
std::regex city("in|[cC]ity");

//To check the presence of date dd./-mm./-yyyy - Only dates from year 2021
std::regex date("(0[1-9]|[12][0-9]|3[0-1])[./-](0[1-9]|1[012])[./-](2021)");

//To check the presence of time - any format
//std::regex time("([0-2][0-9]:[0-5][0-9]|[0-2][0-9]am|[0-2][0-9]pm|[0-2][0-9]AM|[0-2][0-9]PM|[0-2][0-9]Am|[0-2][0-9]Pm|[0-2][0-9] am|[0-2][0-9] pm|[0-2][0-9] AM|[0-2][0-9] PM|[0-2][0-9] Am|[0-2][0-9] Pm)");

//To check calander - keywords include Busy, Free, Date, Appointment
std::regex check("[dD]ate|[bB]usy|[fF]ree|[aA]ppointment");

//To present a fact - keyword include Fact
std::regex fact("[fF]act");
