int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;
    int digit;

    while (n > 0) {
        digit = n % 10;      // get last digit
        product *= digit;    // multiply
        sum += digit;        // add
        n /= 10;             // remove last digit
    }

    return product - sum;
}