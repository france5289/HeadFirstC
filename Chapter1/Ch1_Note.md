# Record some information about Chapter 1

## What is the return value of an assignment

From C standard documentation we can found:
> An assignment expression has the value of the left operand after the assignment

So it is how the following code works:

```C
int a = 0;
printf("%d", a=2); // It will print integer '2' to command line
```

It allows us to use `chanining assignments`:

```C
int b, c = 0;
b = c = 3;
printf("%d", b); // It will print integer '3' to command line
```
