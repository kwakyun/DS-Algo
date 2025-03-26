#include <iostream>

using namespace std;

double e(int x,int n);

int main() {

    printf("%lf \n",e(4,15));
    return 0;
}

double e(int x, int n)
{
    static double s;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e(x,n-1);
   
}

