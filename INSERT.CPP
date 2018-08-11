// header files
#include<iostream.h>
#include<conio.h>

void inserstion(int[], int, int);     // function prototype
void main()
{
	clrscr();

	cout<<"\t\t\t\t\t INSERTSION IN ARRAY \n";
	// a[10] array, s = size of array, in= element to be inserted
	int a[100], s, in;
	cout<<"\n enter size(max size is 100) : ";
	cin>>s;
	cout<<"\n enter the elemnts : ";
	for(int i =0;i<s;i++)
		cin>>a[i];
	cout<<"\n enter the element : ";
	cin>>in;
	inserstion(a,s,in);       // function calling
	getch();
}

void inserstion(int a[], int s, int in) // function defination
{
	int i,pos;

	for(i=0;i<s-1;i++)
	{
	   if(a[i]<=in && in< a[i+1]) // condition to find the position where element is to inserted
		{   // if true
			pos = i+1; break;
		}    // end if
		// else continue
	 }  // end for

	 for(int j= s; j > pos; j--) // inverse loop to add j-1 to j
		a[j] = a[j-1];
	 a[pos] = in;   // finally put the element at the required position
	 s = s+1;  // increement the size

	 cout<<"\n array : ";
	 // display the array
	 for(i = 0;i<s;i++)
	 cout<<a[i]<<" " ;
}