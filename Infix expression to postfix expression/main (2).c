/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include "stack.h"
#include <stdio.h>
#include <string.h>

void infixToPostfix(const char* infix, char* postfix) {
    struct Stack* stack = createStack();
    int i, j;
    char c;

    for (i = 0, j = -1; infix[i]; i++) {
        c = infix[i];

        if (isalnum(c)) {
            postfix[++j] = c;
        } else if (c == '(') {
            push(stack, c);
        } else if (c == ')') {
            while (!isEmpty(stack) && peek(stack) != '(') {
                postfix[++j] = pop(stack);
            }
            if (!isEmpty(stack) && peek(stack) != '(') {
                printf("Invalid expression: Unmatched parenthesis\n");
                return;
            } else {
                pop(stack);
            }
        } else {
            while (!isEmpty(stack) && precedence(c) <= precedence(peek(stack))) {
                postfix[++j] = pop(stack);
            }
            push(stack, c);
        }
    }

    while (!isEmpty(stack)) {
        if (peek(stack) == '(') {
            printf("Invalid expression: Unmatched parenthesis\n");
            return;
        }
        postfix[++j] = pop(stack);
    }

    postfix[++j] = '\0';
}

int main() {
    char infix[100];
    char postfix[100];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);

    return 0;
}

