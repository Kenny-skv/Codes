int main()
{
    int m, n, end, isPrime, sum=0;

    /* Input upper limit from user */
    printf("Find sum of all prime between 1 to : ");
    scanf("%d", &end);

    /* Find all prime numbers between 1 to end */
    for(m=2; m<=end; m++)
    {

        /* Check if the current number m is Prime or not */
        isPrime = 1;
        for(n=2; n<=m/2 ;n++)
        {
            if(m%n==0)
            {
                /* 'm' is not prime */
                isPrime = 0;
                break;
            }
        }

        /*
         * If 'm' is Prime then add to sum
         */
        if(isPrime==1)
        {
            sum += m;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d", end, sum);

    return 0;
}
