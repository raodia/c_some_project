int findFibonacci(int n) {
    if (n == 1 || n == 2) {
	return n;
    } else {
	return findFibonacci(n-1) + findFibonacci(n-2);
}
}
