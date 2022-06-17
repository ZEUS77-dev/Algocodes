int isPrime(int A) {
    int k=sqrt(A);
    if(A==1)return 0;
    if(A==2)return 1;
    for(int i=2;i<=k;i++)
    {
        if(A%i==0)return 0;
    }
    return 1; 
}