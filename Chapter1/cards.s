	.file	"cards.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter the card_name: "
.LC1:
	.string	"%2s"
.LC2:
	.string	"Count has gone up"
.LC3:
	.string	"Count has gone down"
	.text
	.globl	main
	.type	main, @function
main:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	-11(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	$0, -16(%rbp)
	movzbl	-11(%rbp), %eax
	cmpb	$75, %al
	jne	.L2
	movl	$10, -16(%rbp)
	jmp	.L3
.L2:
	movzbl	-11(%rbp), %eax
	cmpb	$81, %al
	jne	.L4
	movl	$10, -16(%rbp)
	jmp	.L3
.L4:
	movzbl	-11(%rbp), %eax
	cmpb	$74, %al
	jne	.L5
	movl	$10, -16(%rbp)
	jmp	.L3
.L5:
	movzbl	-11(%rbp), %eax
	cmpb	$65, %al
	jne	.L6
	movl	$11, -16(%rbp)
	jmp	.L3
.L6:
	leaq	-11(%rbp), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	movl	%eax, -16(%rbp)
.L3:
	cmpl	$2, -16(%rbp)
	jle	.L7
	cmpl	$6, -16(%rbp)
	jg	.L7
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	jmp	.L8
.L7:
	cmpl	$10, -16(%rbp)
	jne	.L8
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
.L8:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L10
	call	__stack_chk_fail@PLT
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
