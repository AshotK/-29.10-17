#include <iostream>

using namespace std;

/*�������� ����������� ������� pow(������� ���������� ������������� ����� � ����� �������) � ������ ���������, �� ������������.*/

double pow(double a, int b){
if (b==0){
    return 1;
}
    if (b%2==1){
        return a*pow(a, b-1);
    }
    if (b%2==0){
        return pow(a*a, b/2);
    }
}
int main(){
double a;
double b;
cin >> a >> b;
cout << pow(a, b);
return 0;
}
