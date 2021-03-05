int gcd(int a,int b)
    {
        if(b==0)
        return a;
        
        return gcd(b,a%b);
    }
    void rotateArr(int arr[], int d, int n){
        // code here
        int number_of_sets=gcd(n,d);
        for(int i=0;i<number_of_sets;i++)
        {
            int temp=arr[i];
            int j=i;
            while(1){
                int k=(j+d)%n;
                if(k==i)
                break;
                arr[j]=arr[k];
                j=k;
                
                
            }
            arr[j]=temp;
        }
        
    }
