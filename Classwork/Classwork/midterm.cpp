#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

array<int, 3> a = {1,2,3};
array<int, 3> b = {1,2,3};
array<int, 3> c = {1,2,0};

int print_board();
int move_knight();

int main() {
    
    
    cout << "Chess is a fun game." << endl;

    print_board();
    cout << endl;
    move_knight();
    print_board();
    cout << endl;

    cout << "The knight has moved." << endl;

    return 0;
}

int move_knight(){
    a[1] = 0;
    c[2] = 3;

    return 0;
}

int print_board(){
    for(int x : a){
        cout << x << " ";
    }
    cout << endl;
    for(int x : b){
        cout << x << " ";
    }
    cout << endl;
    for(int x : c){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
