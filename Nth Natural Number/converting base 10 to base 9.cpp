long long findNth(long long N)
    {
        long long base10=N;
        long long base9=0;
        long long pos=1;
        while(base10>0)
        {
            base9+=pos*(base10%9);
            base10=base10/9;
            pos=pos*10;
        }
        return base9;
    }
