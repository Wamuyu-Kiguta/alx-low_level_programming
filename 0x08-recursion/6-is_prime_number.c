/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to be tested
 * Return: 1 if int is prime number
 * Otherwise return 0
 */
int is_prime_number(int n)
{
	int _is_prime = 0;

	if (n < 2)
		_is_prime = 0;
	else if (n == 2)
		_is_prime = 1;
	else if (n % 2 == 1)
		_is_prime = 1;
	return (_is_prime);
}
