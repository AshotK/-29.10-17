#include <iostream>

using namespace std;

int main()
{
    int n, m=0;
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++){
        cout << "Input A["<< i+1 <<"]:";
        cin >> A[i];
    }
    if (n<5)
        cout << "Wrong data" << endl;
    else {
        m=A[0]+A[4];
        for (int i=0; i<=n; i++){
            for (int j=i+4; j<=n-1; j++){
                if (m>A[i]+A[j])
                m=A[i]+A[j];
            }
        }
        cout << m;
    }
    return 0;
    }

