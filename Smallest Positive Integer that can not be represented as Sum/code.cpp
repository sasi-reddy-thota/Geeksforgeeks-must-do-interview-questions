long long smallestpositive(vector<long long> array, int n)
    { 
        sort(array.begin(),array.end());
        long long candidate=1;
        for(int i=0;i<n&&array[i]<=candidate;i++)
        {
            candidate+=array[i];
        }
        return candidate;
    } 
