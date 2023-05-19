# C 89/99  x86-32 Bit Compiler

### How to build
```make```
in the current directory will allow the compiler to be build.

there is also a precomplied binary called ```jcc```.
To run you can envoke ```gcc -E [filename.c] | ./jcc -o [optional.s] ```.

If optional is not specified output.s will be generated. The output assembly is x86-32 bit. There are test files in this directory with [testfile].s as there respective assembly. 
testfiles

```misc.c```  
miscelleneous testing

```prime.c```  

prime numbers up to 100 using a primality test

```grid.c```  
2d grid assigns and printing

```matrix.c```

3x3 determinant 

```gcd.c```

take two user integers and computes gcd using Euclids Algorithm

```towerofhanoi.c``` 

recursively solves tower of hanoi

The ast dump of function and basic block are automatically printed be default but can be stopped by commenting out ```astwalk_impl($4,0);``` on line 527 in parser/parser.y and ```print_func(head_bb)```
quads/quads.c

There are some known issues such as logor not working and  <del> return statements do not "leave function immediately" as they do in C.This is something we did not realize until generating assembly.  </del> (This was fixed Tuesday Morning in an efficient way) <del> In test files we mititaged this by including flags  and breaks.</del> Also some of the error checking is to be desired. Also there are a good amount of warnings.
