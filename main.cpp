#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Welcome to snguy117 8 puzzle solver.\n";
    cout << "Type \"1\" to use default puzzle, or \"2\" to enter your own puzzle.\n";
    int s;
    cin >> s;
    // c1out << s;
    cin.ignore();
    if(s == 1) {
        cout << "default puzzle\n";
    }
    else if(s == 2) {
        cout << "Enter your puzzle, use a zero to represent the blank\n";
        cout << "Enter the first row, use space or tabs between numbers ";
        string row1;
        getline(cin, row1);
        cout << "Enter the second row, use space or tabs between numbers ";
        string row2;
        getline(cin, row2);
        cout << "Enter the third row, use space or tabs between numbers ";
        string row3;
        getline(cin, row3);
        cout << row1;
        cout << row2;
        cout << row3;
    } 


    // cout << "Enter your choice of algorithm\n";
    // cout << "1. Uniform Cost Search\n";
    // cout << "2. A* with the Misplaced Tile heuristic.\n";
    // cout << "3. A* with the Eucledian distance heuristic.\n";
    // int algorithm; 
    // cin >> algorithm;
    // cout << algorithm;


    return 0;
}