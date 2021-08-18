/******************************************************/
/*                ARRAYS-BASED STACK                 */
/*****************************************************/
#include "stack.h"
#include <stdio.h>


/*******
 * Function Description:
 *     Initialize top (top = 0)
 * Parameters: pointer to stack
 * return: none
 */
void initStack(Stack* ptr_s)
{
    ptr_s->top = 0;
}


/*******
 * Function Description:
 *     push a value to stack
 * Parameters: the value to be pushed & pointer to the stack
 * return: 0 -> No push (stack is full)
 *         1 -> push successfully
 */
uint8 push(uint8 value , Stack* ptr_s)
{
    if(ptr_s->top == MAXSTACK)
        return 0;
    else    
    {
        ptr_s->data[ptr_s->top++] = value ;
        return value;
    }    
}


/*******
 * Function Description:
 *     remove a value from the top of the stack
 * Parameters: pointer to the stack
 * return: the removed value or exit if the stack is empty
 */
uint8 pop(Stack* ptr_s)
{
    if (stackSize(ptr_s)) {
        return ptr_s->data[-- ptr_s->top];
    }
    exit(123);
}


/*******
 * Function Description:
 *     return the top of the stack
 * Parameters: pointer to the stack
 * return: the top of the stack or exit if the stack is empty
 */
uint8 peek(Stack* ptr_s) {
    if (stackSize(ptr_s)) {
        return ptr_s->data[ptr_s->top-1]; 
    }
    exit(123);
}


/*******
 * Function Description:
 *     return size of the stack
 * Parameters: pointer to the stack
 * return: stack size
 */
int stackSize(Stack* ptr_s)
{
    return ptr_s->top ;
}


/*******
 * Function Description:
 *     traverse stack using simple display function or any other function
 * Parameters: pointer to the stack & pointer to a the function to be executed
 * return: none
 */
void traverse(Stack *ps , void (*pf)(uint8))
{
    printf("[ ");
    for(int i = ps->top - 1 ; i >= 0 ; i--)
    {
        pf(ps -> data[i]);
        printf(",");
    }
    printf(" ]\n");
}

