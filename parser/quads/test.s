	.file	"test.c"
	.text

	.globl	main
	.type	main, @function
main:
        pushl   %ebp
        movl    %esp, %ebp
		subl    $16, %esp
        pushl   $1
	.section	.rodata
.LC0:
	.string	"test%d"
	.text
        pushl   $.LC0
        call    printf
		addl $16, %esp
		movl %eax, -4(%ebp)

        nop
        leave
        ret
