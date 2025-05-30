#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin, input);

    int a = 0, b = 0;
    char s;
    size_t op_pos;
    
    // Finding the operator position
    for (char op : {'+', '-', '*', '/'}) {
        op_pos = input.find(op);
        if (op_pos != string::npos) {
            s = op;
            break;
        }
    }

    // Extracting numbers and converting to integers
    a = stoi(input.substr(0, op_pos));
    b = stoi(input.substr(op_pos + 1));

    if(s == '+') {
        cout << a + b << endl;
    } else if (s == '-'){
        cout << a - b << endl;
    } else if (s == '*'){
        cout << a * b << endl;
    } else {
        cout << a / b << endl;
    }
}