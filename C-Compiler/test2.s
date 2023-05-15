	.file	"test.c"
	.text
	.globl	main
	.type	main, @function
.LC0:
  .string "%d\n"

main:
  leal 4(%esp), %ecx
  andl $-16, %esp
  pushl -4(%ecx)
  pushl %ebp
  movl %esp, %ebp
  pushl %ecx
  subl $52, %esp
  movl $0, -12(%ebp)
  jmp .L2
.L3:
  movl -12(%ebp), %eax
  movl -12(%ebp), %edx
  movl %edx, -56(%ebp,%eax,4)
  addl $1, -12(%ebp)
.L2:
  cmpl $9, -12(%ebp)
  jle .L3
  leal -56(%ebp), %eax
  addl $20, %eax
  movl %eax, -16(%ebp)
  movl -16(%ebp), %eax
  movl (%eax), %eax
  subl $8, %esp
  pushl %eax
  pushl $.LC0
  call printf
  addl $16, %esp
  movl $0, %eax
  movl -4(%ebp), %ecx
  leave
  leal -4(%ecx), %esp
  ret