	.file	"first.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"%s"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 64
	mov	DWORD PTR -52[rbp], edi
	mov	QWORD PTR -64[rbp], rsi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	movabs	rax, 7885630463507786051
	movabs	rdx, 17848790819217509
	mov	QWORD PTR -32[rbp], rax
	mov	QWORD PTR -24[rbp], rdx
	mov	rax, QWORD PTR -64[rbp]
	add	rax, 8
	mov	rdx, QWORD PTR [rax]
	lea	rax, -42[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	strcpy@PLT
	lea	rax, -32[rbp]
	mov	rsi, rax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	mov	eax, 0
	mov	rcx, QWORD PTR -8[rbp]
	sub	rcx, QWORD PTR fs:40
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (GNU) 10.2.0"
	.section	.note.GNU-stack,"",@progbits
