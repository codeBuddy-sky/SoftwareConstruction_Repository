a=[0 0 0 0 1 1 1 1];
b=[0 0 1 1 0 0 1 1];
c=[0 1 0 1 0 1 0 1];

fulldiff=xor(xor(a,b),c);
fullborr=or(and(b,c),and(not(a),or(b,c)));

fullsubs=[a' b' c' fulldiff' fullborr'];
display(fullsubs);