#include <iostream>
using namespace std;
void MaxHeap(int *n, int p, int q) 
{
   int a, b;
   b = n[p];
   a = 2 * p;
   while (a <= q) 
   {
      if (a < q && n[a+1] > n[a])
         a = a + 1;
      if (b > n[a])
         break;
      else if (b <= n[a]) 
	  {
         n[a / 2] = n[a];
         a = 2 * a;
      }
   }
   n[a/2] = b;
   return;
}
void createHeap(int *n, int q) 
{
   int x;
   for(x = q/2; x >= 1; x--) 
   {
      MaxHeap(n, x, q);
   }
}
int main() 
{
   int q, m;
   cout<<"Enter number of elements:\n";
   cin>>q;
   int n[10];
   for (m = 1; m <= q; m++) 
   {
      cout<<"Enter Array elements"<<" "<<(m)<<endl;
      cin>>n[m];
   }
   createHeap(n, q);
   cout<<"Max-Heap\n";
   for (m = 1; m <= q; m++) 
   {
      cout<<n[m]<<endl;
   }
}

