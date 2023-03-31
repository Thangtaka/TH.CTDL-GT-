#include<iostream>
using namespace std;
void nhapMang(float arr[], int &n)
{
    do{
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
    if(n > 50){
    cout << "nhap mang moi tay lam , duoi 50 thoi "<< endl ;
    }
    }while( n  > 50);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
}
void xuatMang(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}
double Tong(float arr[], int n){
    if(n == 0){
        return 0;
    }
    if (arr[n - 1] > 0 ){
        return Tong(arr, n - 1) + 1 ;
        }

	else {
        return 0 + Tong(arr, n - 1);
    }

}
int main(){
    float myArray[50];
    int n;
    int Sum = 0;
    nhapMang(myArray, n);
    xuatMang(myArray, n);
    Tong(myArray,  n);
    Sum = Tong(myArray,  n);
    cout <<" Tong cac duong trong mang la :  "<<Sum<< endl;
    return 0;
}
