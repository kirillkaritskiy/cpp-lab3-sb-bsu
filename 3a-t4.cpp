#include<iostream> 
using namespace std; 

int main()
{
int k, i = 2, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;
if (k==0)
cout<<" it impossible if the number of int is zero :"<<endl;
else
{

do {
cout << "Enter integer nr. " << i << ": "; 
cin >> number;
sum_k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k;
}
return 0;
}
