# include <iostream>
# include<algorithm>
using namespace std;

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{ 
  while (true)
    {
          int mid = (startIndex+lastIndex)/2;
          if(array[mid]==element)
               {
                  return true;
                  break;
               }
             else if(array[mid]>element)
              {
                 for(int i=mid;i>0;i--)
                 { 
                     if (array[i]==element)
                      {
                         return true;
                         break;
                      }

                  }
             }
             else if(array[mid]<element)
	     {
               for(int i=mid;i<lastIndex;i++)
                { 
                   if (array[i]==element)
                    {
                       return true;
                       break;
		    }
                }
	     }
  
    }  

return false;
}

bool binarySearchRecursive(int* array, int startIndex, int lastIndex, int element)
 {
    int mid = (startIndex+lastIndex)/2;
    if(array[mid]==element)
       return true;
    if (array[mid]<element)
       return binarySearchReacursive(array,mid,lastIndex,element);
    else if (array[mid]>element)
       return binarySearch Reacursive(array,startIndex,mid,element);
	
  return false;
 }

int main()
{
  int num,size,choice;
  bool result;
  cout<<"\n ENTER SIZE OF ARRAY:";
  cin>>size;
  int arr[size];
  cout<<"\n ENTER ELEMENTS IN THE GIVEN ARRAY:";
  for(int i=0;i<size;i++)
  {
  	cin>>arr[i];
  }
  cout<<"\n ENTER ELEMENT TO BE SEARCHED:";
  cin>>num;
  //sorting array
  sort(arr,arr+size);
  cout<<"\n ENTER CHOICE:";
  cout<<"\n 1. binarySearch using iteration";
  cout<<"\n 2. binarySearch using recursion";
  cin>>choice;
  switch(choice)
  {
    case 1:result=binarySearchIterative(arr,0,size,num);
           break;
    case 2:result=binarySearchRecursive(arr,0,size,num);
           break;
    default: cout<<"\n invalid input!";
  }
	
if(result==true)
	cout<<"\n <<num<<"is present in the given array";
else if(result==false)
	cout<<"\n <<num<<"is not present in the given array:";
  return 0;
}



