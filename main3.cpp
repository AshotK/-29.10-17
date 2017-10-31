#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N, a, sum=0;
    cout << "Input a number" << endl;
    cin >> N;
    int*A=new int[N];
    for (int i=0; i<N; i++)
    {

        cout << "Input a number" << endl;
        cin >> a;
        A[i]=a;
        if (a%72==0&&a%27==0)
            sum+=0;
        else{
            if(a%72==0||a%27==0)
                sum+=a;
            else
                sum+=0;
        }
    }
    cout << "Sum is" << sum << endl;
    system("pause");
    return 0;
}
