	.file	"test.c"
	.text

	.globl	main
	.type	main, @function
main:
        pushl   %ebp
        movl    %esp, %ebp
        subl    $8, %esp
	.globl	y
	.comm
	.align 4
	.type	y, @object
	.size	y, 4
y:
	.long	5
	.section	.rodata
.LC0:
	.string	"%d"
	.text
        pushl   y
        pushl   $.LC0
        call    printf
        nop
        leave
        ret