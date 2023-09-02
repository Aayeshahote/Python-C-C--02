
#include<iostream>
using namespace std;
char stack[100];
int n = 100, top = -1;

void push(char value) {
    if (top >= n-1)
        cout << "Stack overflow";
    else {
        top = top+1;
        stack[top] = value;
    }
}

void pop() {
    if (top <= -1)
        cout << "Stack underflow";
    else
        top = top-1;
}

char open_brackets[3] = {'(', '[', '{'};
char close_brackets[3] = {')', ']', '}'};

string check_validity(string str) {
    for(int i = 0; i < str.length(); i++) {
        for(int j = 0; j < 3; j++) {
            if(char(str[i]) == open_brackets[j])
            {
               push(str[i]);

            }

            else if (str[i] == close_brackets[j]) {
                int position = j;
                if (top > -1 && open_brackets[position] == stack[top])
                    pop();
                else
                    return "false";
            }
        }
    }
    if (top == -1)
        return "true";
    else
        return "false";
}

int main() {
    string str;
    cin >> str;
    cout << check_validity(str);
}

