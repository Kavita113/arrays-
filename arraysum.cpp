#include<iostream>
using namespace std;
int main()
{
	//start your code from here
	int array[]={8,1,19,0,3};
	int size=5;
	int min=array[0],max=array[0];
	for(int i=0;i<size;i++)
	{
		 
		if(array[i]>max)
		{
			max=array[i];
		}
		else if(array[i]<min)
		{
			min=array[i];
		}
		
	}
	cout<<min<<"+"<<max<<" = "<<min+max;
	return 0;
}

