#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack_contents[STACK_SIZE];
int stack_top = 0;

void make_empty(void) {
    stack_top = 0;
}

int is_empty(void) {
    return stack_top == 0;
}

int is_full(void) {
    return stack_top == STACK_SIZE;
}

void push(int value) {
    if (is_full()) {
        printf("Expression is too complex\n");
        exit(1);
    } else {
        stack_contents[stack_top++] = value;
    }
}

int pop(void) {
    if (is_empty()) {
        printf("Not enough operands in expression\n");
        exit(1);
    } else {
        return stack_contents[--stack_top];
    }
}

int main(void) {
    char entered_character;
    int right_operand;

    while (1) {
        printf("Enter an RPN expression: ");
        scanf(" %c", &entered_character);

        if (entered_character < '0' || entered_character > '9') {
            if (entered_character == 'q')
                break;
        }

        if (entered_character >= '0' && entered_character <= '9') {
            push(entered_character - '0');
            continue;
        }

        right_operand = pop();

        switch (entered_character) {
            case '+': push(pop() + right_operand); break;
            case '-': push(pop() - right_operand); break;
            case '*': push(pop() * right_operand); break;
            case '/': push(pop() / right_operand); break;
            case '=': printf("Value of expression: %d\n", right_operand);
                      make_empty();
                      break;
            default: break;
        }
    }

    return 0;
}
