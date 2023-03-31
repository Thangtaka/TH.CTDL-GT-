#include<iostream>
using namespace std;

int Tong(int a[], int n)
// n la so phan tu co trong mang 
{
    if(n == 0){
        return 0;
    }
    if(a[n-1] %2 ==0){
        return a[n-1] + Tong(a , n-1);
    }
    else{
        return 0 + Tong(a, n-1);
    }
}

int main(){
     int a[]={2, 3, 4, 5, 6};
     int sum = 0;
     int n = sizeof(a) / sizeof(a[0]);
     Tong(a, n);
     sum = Tong(a , n );
cout<<" Tong cac so chan trong mang la : "<<sum<< endl;
return 0;
}
