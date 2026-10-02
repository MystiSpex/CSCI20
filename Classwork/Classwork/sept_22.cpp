/*
    1. need to make a function
    2. it needs to run pythagorean's theorem using parameters specified within the code

Q:
    1. What ist he euclidean distance?
    2. What is meant by 2D?
    3. Are units required?
    4. What's a function?
    5. What is distance?
    6. Who's Euclid?
    7. Why are we doing this?
    8. Who is Pythagorus?
    9. In the equation given, what does it mean?
    10. What a & b & c
A:
    1. The shortest distance between 2 points in any space
    2. A two dimensional space - 2 axis of measure
    3. No
    4. (TO BE SOLVED)
    5. Measurable space
    6. Math Jesus (supposedly)
    7. To learn what a function is
    8. An arithmetician
    9. Describes a right triangle, solving for hypotenuse (because they are predictable)
    10. a and b are side lengths, and c is the hypotenuse length that we are solving for; integers
P':
    Need to create a function that uses 2 points on a 2d graph and finds the distance between said 2 points. The numbers are integers
*/


#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int pythag(int a, int b);

int main(){
    cout << pythag(4321,1234) << endl;

    return 0;
}

int pythag(int a, int b){
    int c = abs(sqrt((a*a)+(b*b)));
    return c;
}