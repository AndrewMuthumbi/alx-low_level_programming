section .data
    format db 'Hello, Holberton', 10, 0  ; Null-terminated string with newline character

section .text
    global _start
    extern printf

_start:
    mov rdi, format
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall
