string Solution::solve(int A) 
{
    string s;
	
	int n=A;
	int arr[1001];
	
	arr[0]=1;
	int carry=0;
	int count=1;
	
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<count;j++)
		{
			int prod=arr[j]*i+carry;
			arr[j]=prod%10;
			carry=prod/10;
		}
		
		while(carry)
		{
			arr[count]=carry%10;
			count++;
			carry/=10;
		}
	}
	
	for(int i=count-1;i>=0;i--)
	{
		s+=to_string(arr[i]);
	}
	
	return s;
}

