#include<iostream>
using namespace std;
int rotation(int length, string array[]);
int main()
{
	int length,output;
	cout<<"Enter the length of array: ";
	cin>>length;
	string array[length];
	cout<<"Enter the elements in one line (left/right): ";
	for(int i=0;i<length; i++)
	{
	cin>>array[i];
	}
	output=rotation(length,array);
	cout<<output;
}
int rotation(int length, string array[])
{
	int result,spin=0;
	for(int i=0;i<length; i++)
	{
		if(array[i]=="right")
		{
			spin+=90;
		}
		else
		{
			spin-=90;
		}
	}
	result=spin/360;
	result=abs(result);
	return result;
}