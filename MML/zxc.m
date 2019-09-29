a=[0 1 1 0 1 1];
b=[1 0 0 0 1 0];
c=[0 0 0 0 0 0];
for i=1:6
    c(i)=a(i).*b(i);
end

display(a');
display(b');
display(c');