bool IsPrime(unsigned int n)
{
	if (n <= 1)
		return false;
	for (unsigned int i = 2; i < n; ++i)
		if (n % i == 0)
			return false;
	return true;
}