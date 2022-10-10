#include<iostream>
using namespace std;

//penilaian coding
int main()
{
    int a, b, c, h, f, g, i, j, k, l, m;
    int d;
    string e;
    int flag=0;

    do
    {
        cout<<"masukkan nama bangun ruang:";
        cin>> d;


        switch(d)
        {
            case 1:
            cout<<"pilih volume atau luas permukaan:"<<endl;
            cin>> e;


            if (e== "volume")
            {
                do
                {
                    cout<<"masukkan nilai a:";
                    cin >>a;
                }
                while (a<=0);
                h=a*a*a;
                cout<<"volume:"<<h;
            }

            else if (e== "luas")
            {
                do
                {
                    cout<<"masukkan nilai b:";
                    cin>>b;
                }
                while (b<=0);
                f=6*b*b;
                cout<< "luas:"<<f;
            }
            break;

            case 2:
            cout<<"pilih volume atau luas permukaan:"<<endl;
            cin>> e;

            if (e== "volume")
            {
                do
                {
                    cout<<"masukkan nilai a:";
                    cin >>a;
                }
                while (a<=0);
                do
                {
                    cout<<"masukkan nilai b:";
                    cin>> b;
                }
                while(b<=0);
                do
                {
                    cout<<"masukkan nilai c:";
                    cin>> c;
                }
                while(c<=0);
                g=a*b*c;
                cout<<"volume:"<<g;
            }

            else if (e== "luas")
            {
                do
                {
                    cout<<"masukkan nilai a:";
                    cin>>a;
                }
                while (a<=0);
                do
                {
                    cout<<"masukkan nilai b:";
                    cin>>b;
                }
                while (b<=0);
                do
                {
                    cout<<"masukkan nilai c:";
                    cin>>c;
                }
                while (c<=0);
                i=2*((a*b)+(a*c)+(b*c));
                cout<< "luas:"<<i;
            }
            break;

            case 3:
            cout<<"pilih volume atau luas permukaan:"<<endl;
            cin>> e;


            if (e== "volume")
            {
                do
                {
                    cout<<"masukkan nilai a:";
                    cin >>a;
                }
                while (a<=0);
                j=3.14*1.33333333*a*a*a;
                cout<<"volume:"<<j;
            }

            else if (e== "luas")
            {
                do
                {
                    cout<<"masukkan nilai a:";
                    cin>>a;
                }
                while (a<=0);
                k=4*3.14*a*a;
                cout<< "Luas:"<<k;

            }
            break;

            case 4:
            cout<<"pilih volume atau luas permukaan:"<<endl;
            cin>> e;


            if (e== "volume")
            {
               do
               {
                    cout<<"masukkan nilai a:";
                    cin >>a;
               }
               while (a<=0);
                do
                {
                    cout<<"masukkan nilai b:";
                    cin >>b;
                }
                while (b<=0);
            l=3.14*a*a*b;
            cout<<"volume:"<<l;
            }

            else if (e== "luas")
            {
                do
                {
                    cout<<"masukkan nilai a:";
                    cin>>a;
                }
                while (a<=0);
                do
                {
                    cout<<"masukkan nilai b:";
                    cin>>b;
                }
                while (b<=0);
                m=2*3.14*a*(a+b);
                cout<< "Luas:"<<m;
            }
            break;

            default:
            flag=0;
            cout<<"yang anda masukkan tidak ada";
            break;
       }

  }
    while (flag=1);
    cout<<"apakah anda ingin mengulang";
    cin>>flag;

return 0;
}








