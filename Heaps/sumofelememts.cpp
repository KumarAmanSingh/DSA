long long findk(long long A[], long long N, long long k)
{
    priority_queue<int> maxh;
    for (int i = 0; i < N; i++)
    {
        maxh.push(A[i]);
    }
    while (maxh.size() > k)
    {
        maxh.pop();
    }
    return maxh.top();
}

long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2)
{
    int first = findk(A, N, K1);
    int second = findk(A, N, K2);
    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > first && A[i] < second)
        {
            sum += A[i];
        }
    }
    return sum;
