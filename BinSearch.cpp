#include<iostream>
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
                     if (array[mid]==element)
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
                   if (array[mid]==element)
                    {
                       return true;
                       break;
        
      }
      
  }  
	
  return false;
}

bool binarySearchRecursive(int* array, int startIndex, int lastIndex, int element)
 {
    int mid = (startIndex+lastIndex)/2;
    if(array[mid]==element)
     return true;
    else if (element>array[mid])
     return binarySearchReacursive(arr,mid,lastIndex,element);
     else if (element<array[mid])
     return binarySearch Reacursive(arr,startIndex,mid,element);


  return false;
 }

int main()
{
  int arr[],num,size,choice;
  cout<<"\n ENTER SIZE OF ARRAY:";
  cin>>size;
  arr[size];
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
    case 1:binarySearchIterative(arr,0,size,num);
           break;
    case 2:binarySearchRecursive(arr,0,size,num);
           break;
    default: cout<<"\n invalid input";
  }

  return 0;
}


