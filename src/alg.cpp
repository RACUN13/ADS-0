// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  int c;
  while (b != 0) {
    c = a % b;
    a = b;
    b = c;
  }
return a;
}
