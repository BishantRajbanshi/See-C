int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}