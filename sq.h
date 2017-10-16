int sqInt(int x)
{
	if (x < 0)
		x = (-1) * x;
	if (x == 1)
		return 1;
	if (x % 10 == 0)
		return (sqInt(x/10) * 100);
	return sqInt(x-1) + x + (x-1);
}
