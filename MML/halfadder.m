a= [0 0 1 1];
b= [0 1 0 1];
halfsum=xor(a,b);
halfcarry= and(a,b);

adderhalfsum=[a' b' and(a,b)' halfsum'];
display(adderhalfsum);

