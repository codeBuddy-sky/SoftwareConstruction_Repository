a= [0 0 1 1];
b= [0 1 0 1];
halfsum=xor(a,b);
halfcarry= and(a,b);

halfaddersum=[a' b' halfsum'];
display(halfaddersum);

halfaddercarry=[a' b' and(a,b)'];
display(halfaddercarry);

