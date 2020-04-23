#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<string>> conv{
        {"+---+", "|   |", "|   |", "+   +", "|   |", "|   |", "+---+"},  // 0
        {"    +", "    |", "    |", "    +", "    |", "    |", "    +"},  // 1
        {"+---+", "    |", "    |", "+---+", "|    ", "|    ", "+---+"},  // 2
        {"+---+", "    |", "    |", "+---+", "    |", "    |", "+---+"},  // 3
        {"+   +", "|   |", "|   |", "+---+", "    |", "    |", "    +"},  // 4
        {"+---+", "|    ", "|    ", "+---+", "    |", "    |", "+---+"},  // 5
        {"+---+", "|    ", "|    ", "+---+", "|   |", "|   |", "+---+"},  // 6
        {"+---+", "    |", "    |", "    +", "    |", "    |", "    +"},  // 7
        {"+---+", "|   |", "|   |", "+---+", "|   |", "|   |", "+---+"},  // 8
        {"+---+", "|   |", "|   |", "+---+", "    |", "    |", "+---+"},  // 9
        {" ", " ", "o", " ", "o", " ", " "}   // :
    };

    string line;
    int h1, h2, m1, m2;
    while (cin >> line) {

        if (!line.compare("end")) break;

        h1 = line[0] - '0', h2 = line[1] - '0', m1 = line[3] - '0', m2 = line[4] - '0'; 

        string display = "";
        for (int y = 0; y < 7; y++) {
            cout << conv[h1][y] << "  " << conv[h2][y] << "  " << conv[10][y] << "  " << conv[m1][y] << "  " << conv[m2][y] << endl;
        } cout << endl << endl;
    } 
    
    cout << "end" << endl;
}