
/*-----------------------------------Question: Bubble Sort Using Recursion ?----------------------------------

#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n, int i)
{
	//base case
	if(i==n-1)//agar 'n-1' elements unki shi jagah pe phunch gye means poora array sort hogya.
	return;
	
	for(int j=0;j<n-1;j++)
	{
		if(arr[j] > arr[j+1])
		swap(arr[j],arr[j+1]);
	}
	
	//recursive case
	bubbleSort(arr, n, i+1);
}

int main()
{
	int arr[] = {5, 4, 3, 1, 2};
	int n = sizeof(arr)/sizeof(int);
	
	bubbleSort(arr, n, 0);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	

return 0;

}
--------------------------------------------------------------------------------------------------*/

/*-----------------------------------------------Question: Binary Search Using Recursion----------------------------
#include<iostream>
using namespace std;

int binarySearch(int *arr, int s, int e, int key)
{
	//base case
	if(s>e)
	return -1;
	
	//recursive case
	int mid = (s+e)/2;
	if(arr[mid]==key)
	return mid;
	else if(arr[mid]>key)
	{
		return binarySearch(arr,mid+1,e,key);
	}
	else
	{
		return binarySearch(arr,s,mid-1,key);
	}
}
int main()
{
	int arr[]={1,5,3,2,0};
	int  n = sizeof(arr)/sizeof(int);
	
	cout<<binarySearch(arr, 0, n-1, 3);
	
	return 0;
}
----------------------------------------------------------------------------------------------------*/

/* -------------------------------Question: String to Int Using Recursion? ---------------------------------------------------
#include<iostream>
#include<cstring>
using namespace std;

int solve(char *arr, int n)
{
	//base case
	if(n==0)
	return 0;
	
	int last_digit = arr[n-1] - '0';
	int chotaAns = solve(arr, n-1);
	
	int badaAns = chotaAns*10 + last_digit;
	return badaAns;
}
int main()
{
	char arr[] = "1235";
	
	cout<<solve(arr, strlen(arr));
}
-------------------------------------------------------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------------------------
//------------------------------Question: Merge Sort Using Recursion?------------------------------------------------------
#include<iostream>
using namespace std;

void Merge(int *arr, int *b, int *c, int s, int e)
{
	int mid = (s+e)/2;
	int i=s, j=mid+1, k=s;
	
	while(i<=mid and j<=e)
	{
		if(b[i]<c[j])
		{
			arr[k]=b[i];
			k++;
			i++;
		}
		else
		{
			arr[k++] = c[j++];
		}
	}
	
	while(i<=mid)
	{
		arr[k++] = b[i++];
	}
	
	while(j<=e)
	{
		arr[k++] = c[j++];
	}
}
void MergeSort(int *arr, int s, int e)
{
	//base case
	if(s >= e)
	return;
	
	//recursive case
	int mid = (s+e)/2;
	
	int b[10000], c[10000];
	
	//1. Divide
	for(int i=s;i<=mid;i++)
	b[i] = arr[i];
	
	for(int i=mid+1;i<=e;i++)
	c[i] = arr[i];
	
	//2.Sort
	
	MergeSort(b, s, mid);
	MergeSort(c,mid+1,e);
	
	//3.Merge
	Merge(arr,b,c,s,e);
	
}
int main()
{
	int arr[] = {5,0,4,3,2,1};
	
	int n = sizeof(arr)/sizeof(int);
	
	MergeSort(arr,0,n-1);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
-------------------------------------------------------------------------------------------*/

//Question: Tower of hanoi using recursion?
//Please note that :- choti disk ke upar badi disk nh aaegi
//and, ek bari mei ek hi disk utha skte hai
#include<iostream>
using namespace std;

void toh(int n, char src, char helper, char des)
{
	//base case
	if(n==0)
	return;
	
	//recursive case
	toh(n-1,src,des,helper);
	cout<<"Taking Disk "<<n<<" from "<<src<<" to "<<des<<" "<<endl;
	toh(n-1,helper,src,des);
}
int main()
{
	int n;
	cin>>n;
	
	toh(n,'A','B','C');
}
