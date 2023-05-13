	.global towerOfHanoi
	.type towerOfHanoi, @function
towerOfHanoi:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB00:
	movl 8(%ebp), %eax
	cmpl $0, %eax
	jne .BB02
	jmp .BB01
.BB01:
	movl $0, %eax
	jmp .BB03
.BB02:
	pushl 16(%ebp)
	pushl 20(%ebp)
	pushl 12(%ebp)
	movl 8(%ebp), %eax
	movl $1, %edx
	subl %edx, %eax
	movl %eax, -4(%ebp)
	pushl -4(%ebp)
	call towerOfHanoi
	addl $16, %esp
	pushl 16(%ebp)
	pushl 12(%ebp)
	pushl 8(%ebp)
	.section .rodata
.LC0:
	.string "Move disk %d from rod %d to rod %d
"
	.text
	pushl $.LC0
	call printf
	addl $16, %esp
	pushl 12(%ebp)
	pushl 16(%ebp)
	pushl 20(%ebp)
	movl 8(%ebp), %eax
	movl $1, %edx
	subl %edx, %eax
	movl %eax, -8(%ebp)
	pushl -8(%ebp)
	call towerOfHanoi
	addl $16, %esp
	jmp .BB03
.BB03:
	leave
	ret
	.global main
	.type main, @function
main:
	pushl %ebp
	movl %esp, %ebp
	subl $16, %esp
.BB10:
	movl $3, %eax
	movl %eax, -4(%ebp)
	pushl $2
	pushl $3
	pushl $1
	pushl -4(%ebp)
	call towerOfHanoi
	addl $16, %esp
	movl $0, %eax
	leave
	ret
