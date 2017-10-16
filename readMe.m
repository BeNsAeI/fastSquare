Use this code on 2 conditions:
1- at your own risk
2- contact me and tell me about what are you using it for

On that note here are some disclamers:

___

Explaination of how it works:

Algorythm goes like this:
x^2 = (x-1)^2 + x + (x-1)

lets call the function sq():

sq(x) = sq(x-1) + x + (x-1).

now let's make it faster:

sq(x):
	if x == 0:
		return 0
	if x % 10 == 0:
		return sq(x/10) * 100
	else:
		return sq(x-1) + x + (x-1)

Behnam Saeedi:
Saeedib@oregonstate.edu
http://people.oregonstate.edu/~Saeedib/
