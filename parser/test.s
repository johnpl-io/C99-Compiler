	.file	"test.c"
	.text
	.globl	main
	.type	main, @function
.LC0:
  .string "%d\n"

main:
  pushl %ebp
  movl %esp, %ebp
  movl $3, x+4
  nop
  popl %ebp
  ret