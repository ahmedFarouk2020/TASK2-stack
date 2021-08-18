#include<stdio.h>
#include<string.h>
#include"stack.h"

void displayStack(uint8 data);


int main() {
    /* create an init a stack */
    Stack stack;
    initStack(&stack);

    /* a buffer for input */
    char input[10] = {'\0'};

    /* get the input from user */
    scanf("%s",&input);
    
    /* iterate over the input data */
    for (int i = 0; i < strlen(input); i++)
    {
        // push openning braces into the stack
        if(input[i] == '(' || input[i] == '{' ) {
            push(input[i], &stack);
            continue;
        }
        else if (input[i] == ')' || input[i] == '}') {
            // if braces are met, pop the stack
            uint8 head = peek(&stack); 
            /* ')' - '(' = 1   AND   '}' - '{' = 2 */
            if (input[i] - head == 1 || input[i] - head == 2)
            {
                pop(&stack);
            }
        }
        else {
            // continue
        }
    }
    // if stack is empty? Balanced
    if (stackSize(&stack) == 0)
    {
        printf("Balanced \n");
    }
    else
    {
        printf("Not Balanced \n");
    }

    return 0;
}


void displayStack(uint8 data)
{
    printf("%d",data);
}