#include<iostream>
bool consecutive(int array[],int length);
using namespace std;
int main()
{
    bool output;
	cout<<"Enter the length of array: ";
	int length;
	cin>>length;
	int array[length];
	cout<<"Enter elements of array: ";
	int elements;
	for(int i=0;i<length;i++)
	{
		cin>>array[i];
	}
	output=consecutive(array,length);
	cout<<output;
}

bool consecutive(int array[],int length)
{
    int temp;
    bool result;
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<length;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}	
	}

	for(int k=1;k<length;k++)
	{
		if(array[k]==array[k-1]+1)
		{
			result=true;
		}
		else
		{
			result=false;
			break;
		}
	}
return result;
}



		

