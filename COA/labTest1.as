ORG 100
CLA 
CLE
LDA PTR I
BUN B3
SZE
BUN H13
BUN H02

PTR, HEX 300
DIS0, DEC 00
DIS1, DEC 01
DIS2, DEC 10
DIS3, DEC 11

B3, CIR 
CIR
CIR
CIR

H02, CLE 
CIR
SZE
BUN D2
BUN D0

D0, CLE
LDA DIS0
OUT
HLT

D2, CLE
LDA DIS2
OUT
HLT

H13, CLE
CIR
SZE 
BUN D1
BUN D3

D1, CLE
LDA DIS1
OUT
HLT

D3, CLE
LDA DIS3
OUT
HLT

ORG 300
NUM, HEX 88

END 