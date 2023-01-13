#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[])
    {
         B[0]=0;
         double sum=0,sum1=1,sum2=0,max=0,min=100;
        for(int i=0;i < N;i++){
            B[0]+=A[i]; 
            sum+=A[i]*A[i];
            sum1*=A[i];
            sum2+=1.0/A[i];
            if(max<A[i]){max=A[i];}
            if(min>A[i]){min=A[i];}


        }
        B[0]=B[0]/N;
        B[1]=sqrt((sum/N)-(B[0]*B[0]));
        B[2]=pow(sum1,1.0/N);
        B[3]=N/sum2;
        B[4]=max;
        B[5]=min;

    }