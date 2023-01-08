#include<iostream>
using namespace std;
int main()
{
	//start your code from here
	int a[]={1,2,3,4,5};
	int b[]={5,6,7,8,9};
	int min1=a[0],min2=b[0];
	int size1=(sizeof(a)/sizeof(a[0]));
	int size2=(sizeof(b)/sizeof(b[0]));
	int index1,index2,min2A,min2B;
	for(int i=0;i<size1;i++)
	{
		if(a[i] < min1)
		{
			min2A=min1;
			min1=a[i];
			index1=i;
		}
		else if(a[i]<min2A)
        {
            min2A=a[i];	
		}
		
	}
	for(int i=0;i<size2;i++)
	{
		if(b[i] < min2)
		{ 
		    min2B=min2;
			min2=b[i];
		}
		else if(b[i]<min2B)
        {
            min2B=b[i];
			index2=i;	
		}
	}
	if(index1!=index2)
	{
	cout<<min1<<"+"<<min2<<"="<<min1+min2<<endl;	
	}
	else
	{
		cout<<min2A+min2<<" + "<<min2B+min1<<" = "<<min2A+min2+min2B+min1<<endl;
	}
	
	
	return 0;
}

