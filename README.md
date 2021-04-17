# intentrecoginition_cplusplus

This is a simple small intent recognition command line tool.
The idea is to be able to ask a set of predefined questions and accurately recognize the intent of the user. The predefined intents are the following:

* What is the weather like today? => Prints (Intent: Get Weather)
* What is the weather like in Paris today? => Prints (Intent: Get Weather City)
* What is the weather like in New York today? => Prints (Intent: Get Weather City)
* Am I free at 13:00 PM tomorrow? ==> Prints (Intent: Check calendar)
* Tell me an interesting fact. => Prints (Intent: Get Fact)

How to run the program?

*Build the program

mkdir build
cd build
cmake ..
make

*Run the program
./result

Tasks:
Basic Tasks:
-The above mentioned use cases have to work (using string matching and regular expressions) - DONE
-The project has to be buildable with CMake - DONE
-The commands: `mkdir build && cd build && cmake ..  && make` must build the application - DONE
-The project is developed using git and pushed to <https://github.com/.> - DONE

Advanced Tasks:
-The project has unit tests - WIP
-The commit messages in the project are atomic and understandable - DONE/WIP

Very Advanced Tasks:
-Handle different semantic variations - DONE