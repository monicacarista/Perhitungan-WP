/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int data[5][3]= {{5,2,3},{4,4,4},{2,2,4},{2,3,5},{3,4,2}};
    cout<<"Data Alternatif"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<data[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    int bobot[3] = {3,3,4};
    cout<<"\nBobot"<<endl;
    for(int i=0; i<3;i++){
        cout<<bobot[i]<<" "<<endl;
    }
    
    //sigma bobot
    int sum = 0;
        cout<<"\nSigma Bobot";
    for(int i=0;i<3;i++){
        sum += bobot[i];
    }cout<<sum<<endl;
    
    //normalisasi bobot
    vector<double>vec;
      cout<<"\nNormalisasi Bobot"<<endl;
       for(int i=0;i<3;i++){
           vec.push_back(bobot[i]/sum);
           cout<<vec[i]<<endl;
        
    }
    cout<<endl;
    // cout<<endl;
    // cout<<vec[0];
    cout<<"menghitung nilai vektor s"<<endl;
    double s1 = (pow(data[0][0], -vec[0]))*(pow(data[0][1], vec[1]))*(pow(data[0][2], vec[2]));
    double s2 = (pow(data[1][0], -vec[0]))*(pow(data[1][1], vec[1]))*(pow(data[1][2], vec[2]));
    double s3 = (pow(data[2][0], -vec[0]))*(pow(data[2][1], vec[1]))*(pow(data[2][2], vec[2]));
    double s4 = (pow(data[3][0], -vec[0]))*(pow(data[3][1], vec[1]))*(pow(data[3][2], vec[2]));
    double s5 = (pow(data[4][0], -vec[0]))*(pow(data[4][1], vec[1]))*(pow(data[4][2], vec[2]));
    
    
    cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5;
    cout<<"\n";
    cout<<"menghitung nilai sigma s"<<endl;
    double sigma = s1+s2+s3+s4+s5;
    cout<<sigma;
    
    cout<<endl;
    cout<<"Menghitung nilai vektor v"<<endl;
        double v1 = s1/sigma;
        double v2 = s2/sigma;
        double v3 = s3/sigma;
        double v4 = s4/sigma;
        double v5 = s5/sigma;
        cout<<v1<<endl<<v2<<endl<<v3<<endl<<v4<<endl<<v5;
    
    
    
    return 0;
}
