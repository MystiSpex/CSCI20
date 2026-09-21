// This is the main library that is always added
#include<iostream>
// Since I plan on using just std::cout, I'll tell the program that I am using it specifically
using std::cout;
// Entrypoint and sole function
int main (){
    // 3 different booleans that are either true or false, set arbitrarily
    bool isRaining = false;
    bool busArrived = true;
    bool isWeekend = false;
    // The if statement that reads the booleans for true or false and follows the program depending on the state
    if(!isRaining && busArrived && !isWeekend){
        std::cout << "Unfortunately still have school." << std::endl;
    // An alternate solution to catch certain cases
    }else if(isRaining && busArrived && !isWeekend){
        std::cout << "I caught a cold so can't make it to school." << std::endl;
    // The output when everything else falls through the cracks
    }else{
        std::cout << "No school today!" << std::endl;
    }
    // Telling the main function that the result is 0 so it gets off my back
    return 0;
}