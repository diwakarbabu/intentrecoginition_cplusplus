# intentrecoginition_cplusplus #

This is a simple small intent recognition command line tool.
The idea is to be able to ask a set of predefined questions and accurately recognize the intent of the user. The predefined intents are the following:

* What is the weather like today? => Prints (Intent: Get Weather)
* What is the weather like in Paris today? => Prints (Intent: Get Weather City)
* What is the weather like in New York today? => Prints (Intent: Get Weather City)
* Am I free at 13:00 PM tomorrow? ==> Prints (Intent: Check calendar)
* Tell me an interesting fact. => Prints (Intent: Get Fact)

## How to run the program? ##

### Build the program ###

```bash
mkdir build
cd build
cmake ..
make 
```

### Run the program ###
```
./result 
```

## Tasks: ##

### Basic Tasks: ###
* The above mentioned use cases have to work (using string matching and regular expressions) - _DONE_
* The project has to be buildable with CMake - _DONE_
* The commands: `mkdir build && cd build && cmake ..  && make` must build the application - _DONE_
* The project is developed using git and pushed to <https://github.com/.> - _DONE_

### Advanced Tasks: ###
* The project has unit tests - _DONE_
* The commit messages in the project are atomic and understandable - _DONE/WIP_

### Very Advanced Tasks: ###
* Handle different semantic variations - _DONE_
