#include<stdio.h>
char stack[100];
int n = 100, top = -1;

void push(char value) {
    if (top >= n-1)
        printf("Stack overflow");
    else {
        top = top+1;
        stack[top] = value;
    }
}
void pop() {
    if (top <= -1)
        printf("Stack underflow");
    else
        top = top-1;
}

char open_brackets[3] = {'(', '[', '{'};
char close_brackets[3] = {')', ']', '}'};

char* check_validity(char* str) {
    for(int i = 0; i < strlen(str); i++) {
        for(int j = 0; j < 3; j++) {
            if(str[i] == open_brackets[j])


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

int main()
{

   char str[10];
   gets(str);

    printf(check_validity(str));
}
