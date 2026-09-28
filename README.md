# ECE528HW1

#### Question 1a: What is the difference between a compiler and an interpreter?

A compiler translates the program into machine code before running.

An interpreter translates and runs the program line-by-line.

#### Question 1b: What is the output of a C program’s main() function by default?

The output of a C program's main() function by default is an integer value of 0.

#### Question 2: What are header files in C and what is the purpose of the #include directive?

The header files contains declarations and definitions of functions, data types, and constants that other C files can use.

The #include directive allows the program to use the contents of the header files before compiling.

#### Question 3: Explain how to declare and define a function in C. What is the purpose of the return statement in a function? Can a function have more than one return statement? 

To declare and define a function in C, the function must include the function name, return type, and parameters.

The return statement ends the function and sends the result back to the code that called it.

A function can have more than one return statement. The function would have different conditions that produce different results.

#### Question 4: What is type casting? Provide an example C function that demonstrates explicit type casting from double to int. The function should accept two arguments that are both double and return their sum as an integer.

Type casting is converting a value or variable from one data type to another.

```
int AddNumbers(double number1, double number2)
{
    double sum = num1 + num2;
    return (int)sum;
}
```

#### Question 5: Explain the difference between local and global variables. Provide an example of each.

Locale variables is declared inside a function or block of code. It can only be used within that function or block of code. On the other hand, global variables can be used anywhere in the entire program.

```
int number1 = 10; // global variable

void AddNumbers()
{
    int number2 = 20; // local variable
    int total = 0; // local variable
    total = number1 + number2;
    printf("%d\n, total);
}

int main() 
{
    printf("%d\n", number1);
    AddNumbers();

    return 0;
}
```

number1 works in both the main function and AddNumber() because it is declared as a global variable. However, number2 and total are local variables because they are declared inside AddNumbers(). They cannot be used outside of the function.

#### Question 6: How are strings declared and initialized in C? What is the role of the null terminator ‘\0’

Strings are declared as an array of characters using the char data type. 

The null terminator, '\0', is used to indicate the end of a string.

#### Question 7: What is a pointer in C? How do you pass a pointer to a function? What advantages are there to passing a pointer instead of a value?

Pointers in C are variables that is used to store the memory address of another variable. 

To pass a pointer to a function is by declaring the pointer using "*" and calling the function by passing the address of the variable using "&" operator.

The advantages of passing a pointer instead of a value is that it can be used to overwrite the original data. It can also be used to return multiple values from a function.

#### Question 8: What does the * operator and the & operator do in the context of pointers?

The "*" operator declares that the variable is being used to hold a memory address rather than a regular value.

The "&" operator is used to find the memory address of the variable.

#### Question 9: What is the difference between while and do…while loops?

The difference between while and do-while loops is when the condition is checked. While loop checks the condition before running while do-while loop checks after running. Therefore, do-while runs at least once while while loops may never run if the condition starts as false.

#### Question 10: What does the break statement do? How is it different from the continue statement?

The break statement ends the loop and continues the code after the loop. 

The continue statement does not end the loop but skips the current turn and moves on to the next one.

#### Question 11: Explain the use of bitwise operators (i.e. &, |, ^, ~, <<, >>) in C. Which bitwise operators can be used to set, clear, toggle, or check a specific bit in an integer variable?

Bitwise operators in C are used to work directly with the individual bits of an integer.

OR (|) is used to set.
AND (&) is used to clear or check.
XOR (^) is used to toggle.

#### Question 12: What is the purpose of the PxSEL0 and PxSEL1 GPIO registers? Write two statements that select the GPIO function for the pins P1.0 and P1.7.

The PxSEL0 and PxSEL1 GPIO registers chooses whether the pins are used as general purpose input/output pins or one of the alternate peripheral functions.

```
P1->SEL0 &= ~(0x82);
P1->SEL1 &= ~(0x82);
```

#### Question 13: Write a void function named P1_1_and_P1_4_Init that configures P1.1 and P1.4 as GPIO inputs with pull-up resistors enabled.

```
void P1_1_and_P1_4_Init()
{
    P1->SEL0 &= ~(0x12);
    P1->SEL1 &= ~(0x12);
    P1->DIR &= ~(0x12);
    P1->REN |= 0x12;
    P1->OUT |= 0x12;
}
```

#### Question 14: Write a void function named Buttons_Init that configures the following pins as GPIO inputs with pull-down resistors enabled.

```
void Buttons_Init()
{
    P3->SEL0 &= ~(0x42);
    P3->SEL1 &= ~(0x42);
    P3->DIR &= ~(0x42);
    P3->REN |= 0x42;
    P3->OUT &= ~(0x42);

    P5->SEL0 &= ~(0x11);
    P5->SEL1 &= ~(0x11);
    P5->DIR &= ~(0x11);
    P5->REN |= 0x11;
    P5->OUT &= ~(0x11);
}
```

#### Question 15: Write a void function named LEDs_Init that configures the following pins as GPIO outputs. Initialize the pins to zero

```
void LEDs_Init
{
    P7->SEL0 &= ~(0x81);
    P7->SEL1 &= ~(0x81);
    P7->DIR |= 0x81;
    P7->OUT &= ~(0x81);
}
```