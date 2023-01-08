#include<iostream>
using namespace std;
int main()
{
	//start your code from here
	int a[]={8,6,4,2,3,5,0,1};
	int size=sizeof(a)/sizeof(a[0]);
    int missing=-1;
    int sum=0;
    for(int i=0;i<size;i++)
    {
      sum+=a[i];
    }
    int range_sum=(size)*(size+1)/2;
    missing=range_sum-sum;
    cout<<missing<<endl;
		
	return 0;
}

