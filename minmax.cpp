#include <iostream>
#include<climits>
using namespace std;

int main() {
    
    int min=INT_MAX,max=INT_MIN;
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++)
    {
        if(a[i]<min)
        min=a[i];
        if(a[i]>max)
        max=a[i];
        
    }
	cout<<"Largest is "<<max<<"Smallest is "<<min<<endl;
	return 0;
}
