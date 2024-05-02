section .data
    hello db "Hello, Holberton", 10, 0  ; Null-terminated string with newline character

section .text
    extern printf  ; Import printf function from C standard library

global _start

_start:
    ; Print the string using printf
    mov rdi, hello  ; Load the address of the string
    call printf     ; Call printf function

    ; Exit the program
    mov rax, 60          ; Exit syscall number
    xor rdi, rdi         ; Return 0 status
    syscall