# C 99  x86-32 Bit Compiler
This is the source code for a basic unoptimized C compiler that is based off of the c99 standard. It was made using [flex](https://github.com/westes/flex) and [bison](https://www.gnu.org/software/bison/) for the frotend. The backend consists of the generatation of three-address code IR (quads) and code generation to x86-32 bit assembly. 
## Installation
### Dependencies
- ```git```
- ```bison``` 
- ```flex```
- ```make```
- ```gcc``` or ```clang```
### Building on a Unix-like system
Run ```make``` in ```src/``` to allow for an executable binary called ```jcc``` to be created. There is also a linux precombiled binary in ```bin/```. 


## How to Use
To run the compiler you can envoke ```gcc -E [filename.c] | ./jcc -o [optional.s] ```. This allows for gcc to output the preprocesor into the compiler. If ```optional.s``` is not specified output.s will be generated. Once the assembly is outputed, ```gcc -m32 [output].s -no-pie``` can be used to assemble the and link the .s file. This can also be done by replacing ```gcc``` with ```clang```. 
## Test Files
There are testfiles included in the tesfile directory with their respective generated assembly files. 

 ```misc.c```  

 miscelleneous testing 

```prime.c```  

prints  prime numbers up to 100 using a [primality test](https://en.wikipedia.org/wiki/Primality_test)

```grid.c```  
2d

```matrix.c```

computes a 2x2 determinant

```gcd.c```

take two user integers and computes gcd using the [Euclidean Algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm)

```towerofhanoi.c``` 

recursively solves the [Tower of Hanoi](https://en.wikipedia.org/wiki/Tower_of_Hanoi)
## Phases of Compilation
```Lexical Analysis -> Parsing and Semantic Analysis  -> Intermediate Code -> Code Generation ```
- Lexical analysis 
    - This is done using Flex following the c99 iso standard. 
- Parsing Semantic Analysis 
    - Bison was used to represent the C99 grammar using [BNF form](https://en.wikipedia.org/wiki/Backus%E2%80%93Naur_form). A parse tree is formed in this stage in the form of an Abstract Syntax Tree for expressions, declarations, and control flow statements. Declared variables are also inserted into a symbol table at this stage while keeping into regard proper scoping rules. Most of the error checking is implemented here. 
- Intermediate Code
    - The IR is represented in quads and is heavily based of the ones highlighted [here](http://faculty.cooper.edu/hak/ece466/lecture-u05.pdf). Some error checking is implemented here.
- Code Generation 
    - x86-32 bit assembly

## Features
### Supported 
- [x] Function definitions with parameters and calling external functions
- [x] Functions return int, void, and pointer
- [x] Pointer operations and pointer arithmetic
- [x] N-Dimensional arrays
- [x] Global and local variables
- [x] Proper scoping of variables
- [x] Postdec and Postinc operators
- [x] Control Flow:  for loops, while loop, if statements 
### Some Support
* Structs/Union
    * There is full suport for scoping but they are not not implemented on the backend
* SIZEOF 
    * Does not cover SIZEOF expressions
* storage class and type qualifiers 
    * It is fully implemented in the frontend but not added to the backend.
* char values
    * again supported in backend but would require bit-extension on the frontend so it is not yet implemented 
- Logical OR 
    - Is in their but in an effort to produce fall out there are some bugs. 
### Not supported
- Initializers
- K & R syntax for functions
- typedef
- enum
- bitfields
- Shifting and bitwise operators


### Notes
Error checking is present but is to be desired there are many things the compiler will let you do that it should check and will let you do anyway. To hit the target of x86-32 bit there are some design decisions in the frontend that are designed to keep this in mind (such as computing stack offsets) which is not the best if one wants drop-in another backend. 
