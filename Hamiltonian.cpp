Hamiltonian and Lagrangian
Students have become secret admirers of SEGP. They find the course exciting and the professors amusing. After a superb Mid Semester examination, it’s now time for the results. The TAs have released the marks of students in the form of an array, where arr[i] represents the marks of the ith student.
Since you are a curious kid, you want to find all the marks that are not smaller than those on its right side in the array.

#include<iostream>
 
using namespace std; 
 


void printLeaders(int arr[], int size)
 
{ 
    
for (int i = 0; i < size; i++) 
  
  { 
       
 int j; 
        
for (j = i+1; j < size; j++) 
       
 { 
           
 if (arr[i] <= arr[j]) 
               
 break; 
       
 }     
       
 if (j == size) 
           
 cout << arr[i] << " "; 

  } 

} 
 
 

int main()
 
{ 
    
int arr[] = {16, 17, 4, 3, 5, 2}; 
   
 int n = sizeof(arr)/sizeof(arr[0]); 
    
 printLeaders(arr, n); 
   
 return 0; 
} 
sample input:
6
16 17 4 3 5 2

sample output:
17 5 2