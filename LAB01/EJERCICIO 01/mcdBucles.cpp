int mcdBucles(int a, int b) {
    int menor = (a < b) ? a : b;
    for (int i = menor; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1;
}
