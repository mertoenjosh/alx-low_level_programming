# READ ME

## What I have learnt.

- To convert a number less than 10 to ascii, add 48.
- While conerting a number greater than 10 with `putchar` pass individial number

eg 
> Converting single digits and double digits
```c

	if (n < 10)
		putchar(n + 48);
	if (n > 9 && n < 100)
		putchar((n / 10) + 48);
		putchar((n % 10) + 48);
```
