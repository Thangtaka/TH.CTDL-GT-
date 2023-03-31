#include<iostream>
using namespace std;
// S(x,n)= x +x^2/2! + x^3/3! + ... + x^n/n!
float Tong(int x, int n){
if(n == 0){
    return 0;
}
if(n == 1){
    return x;
}
else {
return (1 + x/n)*Tong(x,n-1)-(x/n)*Tong(x,n-2);
}
}
int main(){
    int x=4;
    int n=5; 
    float sum = 0 ;
    Tong(x, n);
    sum = Tong(x , n);
    cout<<" Ket qua cua S la "<<sum<< endl;
    return 0;
}
