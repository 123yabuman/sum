#include <iostream>
using namespace std;
const int size = 100;
 void getArray(double [], int&);
void printArray(const double [], const int);
int main (){
double a[size];
int n;
getArray(a, n);
cout<< "The array has" << n<<" elements.\nTheir sum is: \n";
printArray(a,n);
return 0;
}
void getArray(double a[], int& n)
{
     n =0;
cout <<"Enter data. Terminate with 0:\n";
for (n = 0; n < size; n++) {
cout << n << " ";
cin >> a[n];
if (a[n]==0) break;

};
} void printArray(const double a[], const int n){
    int z=0;
for (int i = 0; i < n;i++)
    z+=a[i];
cout << z<<endl;
}
