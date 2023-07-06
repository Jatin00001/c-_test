array<int,9>a{1,2,3,4,5,1,2,3,4};
    xor use for we know xor  0 ^ 0 = 0 && 0 ^ 1 = 1
    int n = 0;
    for(int i = 0;i<a.size();i++)
    {
        n = n ^ a[i];
    }
    cout<<n<<endl;