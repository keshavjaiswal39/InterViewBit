vector<int> Solution::maxset(vector<int> &A) 
{
    long long int s=0;
    long long int e=A.size();
    long long int sum=0;
    long long int Max=-1;
    long long int start;
    long long int end;
    long long int counter;

    vector<int> v;
    
    while(s<e)
    {
        counter=1;
        
        while(s<e and A[s]<0)
        {
            s++;
            continue;
        }
        
        while(s<e and A[s]>=0)
        {
            sum+=A[s++];
            counter++;
        }
        
        if(sum>Max)
        {
            Max=max(sum,Max);
            start=s-counter+1;
            end=s;
        }
        sum=0;
    }
    
    for(long long int i=start;i<end;i++)
    {
        v.push_back(A[i]);
    }
    
    return v;
}





/*

Other Methods:

vector<int> Solution::maxset(vector<int> &A) {
    long long sum=0,ans = INT_MIN;
    vector<int>a, b;
    for(auto i:A){
        if(i<0){
            sum=0, b.clear();
            continue;
        }
        sum+=i;
        b.emplace_back(i);
        if(ans<sum or (ans==sum and a.size()<b.size())){
            ans=sum;
            a = b;
        }
    }
    return a;
}






*/

