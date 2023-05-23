section .text
    global _start

_start:
    ; Print a message to the console
    mov     eax, 4         ; Syscall number for write
    mov     ebx, 1         ; File descriptor (stdout)
    mov     ecx, message   ; Message address
    mov     edx, 13        ; Message length
    int     0x80           ; Call the kernel

    ; Exit the program
    mov     eax, 1         ; Syscall number for exit
    xor     ebx, ebx       ; Exit status (0)
    int     0x80           ; Call the kernel

section .data
    message db 'Hello, world!', 0x0a  ; Null-terminated string
