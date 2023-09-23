section .data
    hello db "Hello, Holberton",0

section .text
    global _start

_start:
    ; write the string to stdout
    mov eax, 0x4          ; syscall number for sys_write
    mov edi, 0x1          ; file descriptor 1 (stdout)
    mov edx, 0x11         ; length of the string
    lea rsi, [hello]      ; address of the string
    syscall

    ; exit the program
    mov eax, 0x60         ; syscall number for sys_exit
    xor edi, edi          ; exit code 0
    syscall

