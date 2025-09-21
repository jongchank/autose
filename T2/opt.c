int main(void)
{
    unsigned long i, sum;
    sum = 0;
    for (i = 0; i < 1000000000; i++) {
        sum += i;
    }
    return sum;
}

