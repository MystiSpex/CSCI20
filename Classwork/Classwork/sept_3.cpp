// The # symbol a the front of the line is the beginning of a reserve word. After the # is "include" which is the second half of the reserve word that means that it is accessing a library full of things made by others so we don't have to. The beginning of the name of the library is the <, followed by iostream. The latter is the name of the library in use and is followed finally by a > to close off the statement.
#include<iostream>

// The word "using" is a reserve word that is saying that there is a specific word in the library that the program is going to be using, so it should take a copy of that specific word in order to save time on searching the whole library. The phrase within the library that the program is using is the "std" which means standard and hails from iostream which was referenced above. Two colons follow it are the scope of the next word, which is "cout." the "c" is referencing the language itself while the "out" is saying that whatever is part of it is being outputted through the console. After which is a semicolon to end the statement.
using std::cout;

// entrypoint
// First up is the "int" prefix to the function. It expands to integer, which is a whole number or a natural number. After the int is "main" which is the word for the entrypoint of the files. Parentheses follow because there could be parameters within. Then the curly braces that open up to the function itself.
int main() {
    // In line 11, there begins the character "s" followed by "t" and "d" which all together represent the standard library. After the "std" follows two colons that point towards the next set of characters "c" which references the parent language, then "o" "u" and "t" which spell "out." together with the "c" it becomes "cout" which means that the c-based language is outputting the string that follows. After the cout is the less than symbol. Two of them, to be precise, that look like they are originating from cout and branching into the command that follows. After the two less-than-symbols is an open quotation mark that hints at the beginning of a string that is meant to be outputted with cout. Inside the quotations is the text "hello world" which is almost the end. At the very end of the line is a semicolon that tells me this is the end of the line of code.
    std::cout << "hello world";
    // "Return" in this case is a reserve word to say that the main function is returning whatever follow, as that is required of an int main function. The 0 afterwards is a placeholder that is just to satisfy the condition of returning an integer. Then, of course, is the semicolon.
    return 0;
// The closing curly brace to end the function.
}