#include<iostream>
using namespace std;
int main()
{
	//start your code from here
	int size,even=0,odd=0;
	int arr[size];
	cout<<"Enter the size of an array:";
	cin>>size;
	cout<<"Enter the elemets in an array:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<"Even:"<<even<<endl;
	cout<<"Odd:"<<odd;
	return 0;
}

