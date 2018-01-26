.text
.globl _myOperation
_myOperation:
add %esi, %edi  // add x and y
mov %edi, %eax  // move result to correct register for return value
ret
