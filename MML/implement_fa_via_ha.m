a= [0 0 0 0 1 1 1 1];
b= [0 0 1 1 0 0 1 1];
c= [0 1 0 1 0 1 0 1];
halfsum=xor(a,b);
halfcarry= and(a,b);

fullsum=xor(halfsum,c);
fullcarry=or(halfcarry,and(halfsum,c));

fullsums=[a' b' c' fullsum' fullcarry'];
display(fullsums);

