#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, n=10;
    double x[10], sum;

    for(i = 0; i < n; ++i)
       {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> x[i];
       }

   
    for(i = 1; i < n; ++i)
   	   {
       if(x[0] < x[i])
           x[0] = x[i];
       }
    cout << "Largest element = " << x[0] << endl;
    
    
    for(i = 1;i < n; ++i)
   	   {
     if(x[0] > x[i])
           x[0] = x[i];
 	   }
	cout << "Smallest element = " << x [0] << endl;


	for (i = 0; i < n; i++)
       {
        sum += x[i];    
       }
    cout << "Sum of array elements : " << sum << endl; 
    cout << "Average of array elements : " << sum/10;
    
    
    
    return 0;
    
}
