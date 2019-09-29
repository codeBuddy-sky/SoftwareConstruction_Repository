a=[0 0 0 0 1 1 1 1];
b=[0 0 1 1 0 0 1 1];
cin=[0 1 0 1 0 1 0 1];

fullsum=xor(xor(a,b),cin);
fullcarry=or(and(or(a,b),cin),and(a,b));

adderfullsum=[a' b' cin' fullcarry' fullsum'];
display(adderfullsum);