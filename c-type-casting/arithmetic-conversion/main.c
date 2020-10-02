/*

If the operands have different types, then they are converted 
to the type that appears highest in the following hierarchy 

long double
  ^
  |
double
  ^
  |
float
  ^
  |
unsigned long long
  ^
  |
long long
  ^
  |
unsigned long
  ^
  |
long
  ^
  |
unsigned int
  ^
  |
int

*/