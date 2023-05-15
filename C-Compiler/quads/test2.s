.text

	.comm x, 40, 4      # declare a 4-byte uninitialized global variable

	.globl	main
	.type	main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	
	lea x, %eax      # calculate the address of x[1] using LEA
	movl $3, (%eax)    # store 3 in x[1]
	
	movl (%eax), %eax  # move the value of x[1] into EAX
	pushl %eax
	
	.section	.rodata
.LC0:
	.string "%d\n"
	.text
	pushl $.LC0
	call printf
	nop
	leave
	ret