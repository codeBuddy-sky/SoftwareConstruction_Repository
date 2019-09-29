a=[0 0 1 1];
b=[0 1 0 1];
halfdiff=xor(a,b);
halfborr=and(b,not(a));
halfsub=[a' b' halfdiff' halfborr'];
display(halfsub);