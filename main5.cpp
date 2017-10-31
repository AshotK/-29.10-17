#include <iostream>
#include <cstdlib>

using namespace std;

void sort(int *a, int N){
int temp;
for (int i=0; i<N-1; i++){
    for (int j=0; j=N-i-1; j++){
        if ( *(a+j)>*(a+j+1)){
            temp=*(a+j);
            *(a+j+1)=temp;
        }
    }
}
}
int main(int argc, char *argv[]){
int N;
cin >> N;
int *a=new int [N];
for (int i=0; i<N; i++) cin >> a[i];
sort (a, N);
for (int i=0; i<N; i++) cout << a[i] << "\n";
system("PAUSE");
return 0;
}
