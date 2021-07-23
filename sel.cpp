#include <iostream>

using namespace std;


int main() {


   int n;

   cin>>n;

   int a[n];

   int i,j;

   for(i=0; i<n; i++)

   {

       cin>>a[i];

   }

   for(i=0; i<n-1; i++)

   {

       int mi = i;

       for(j = i+1; j<n; j++)

       {

           if(a[mi]>a[j]) mi = j;

       }  

           int temp = a[mi];

           a[mi] = a[i];

           a[i] = temp;


   }

   for(i=0; i<n; i++)

   {

       cout<<a[i]<<" ";

   }



   return 0;

}
