

	.comm   test_var, 4, 4       # declare a 4-byte uninitialized global variable

	.globl	main
	.type	main, @function
	.globl printf
	.type printf, @function
main:
.BB1:
        pushl   %ebp
        movl    %esp, %ebp
		subl    $16, %esp
        pushl   $1
	.section	.rodata
.LC0:
	.string	"test%d\n"          # add '\n' to print a newline
	.text
        pushl   $.LC0
        call    printf
		addl    $16, %esp

        movl    $42, test_var     # assign a value to test_var
        movl    test_var, %eax
        pushl   %eax
        pushl   $.LC0
        call    printf
		addl    $16, %esp
        nop
        leave
        ret
