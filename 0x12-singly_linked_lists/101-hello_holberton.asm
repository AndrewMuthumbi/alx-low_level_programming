section .data
    msg db "Hello, Holberton", 10, 0  ; string to print, including newline character

section .text
    global main

main:
    push rbp
    mov rbp, rsp

    ; Set up the arguments for the write system call
    mov rax, 1      ; system call number (write)
    mov rdi, 1      ; file descriptor (stdout)
    mov rsi, msg    ; pointer to the message
    mov rdx, 17     ; message length (without null terminator)
    syscall        ; make the system call

    ; Restore the stack and return
    pop rbp
    xor rax, rax    ; return value of 0
    ret
