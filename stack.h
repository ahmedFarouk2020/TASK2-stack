#ifndef STACK_H_
#define STACK_H_

/* MAX NUM OF ELEMENT IN STACK IS 100 */
#define MAXSTACK 10

/* REMEBER TO CHANGE THE FN diplay ACCORDING TO THIS */
typedef unsigned char uint8;

typedef struct stack
{
    int top; /* POINTS TO THE LOCATION IN WHICH WE PUT THE DATA (ACCESS THEN INCREAMENT) */
    uint8 data[MAXSTACK];
}Stack;

void initStack(Stack* ptr_s);

// return type is int to test whether a value is pushed or not
uint8 push(uint8 value , Stack* ptr_s);

uint8 pop(Stack* ptr_s);

uint8 peek(Stack* ptr_s);

int stackSize(Stack* ptr_s);

void traverse(Stack *ps , void (*pf)(uint8));

#endif
