ORG 100
CLE
CLA
LOP, LDA A
CIR
STA A
SZE
BUN ONE
BUN ZERO

ONE, LDA B
ADD P
STA P
CLE

ZERO, LDA B
CIL
STA B
ISZ COUNT
BUN LOP
HLT

A, HEX 0008
B, HEX 0004
P, HEX 0000
COUNT, DEC -8
END