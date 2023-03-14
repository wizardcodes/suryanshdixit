//Number System.
//Base Converter.

#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
//------------------------------------------------------prototypes--------------------------------------------------------//
void decitobin(int);
void decitooct(int);
void decitohex(int);
int bintodeci(int);
int octatodeci(int);
int hexatodeci(string);
//-----------------------------------------------------main function-------------------------------------------------------//
int main(){
    char choice;
    int y,a,b,c,d;

    execute:
    
    cout<<"\n";
    cout<<"\n\t\t\t\t\t\t\t\t-------------------------------------\t\t\n";
    cout<<"\t\t\t\t\t\t|\t\t--->  SELECT YOUR NUMER SYSTEM  <---\t\t|";
    cout<<"\n\t\t\t\t\t\t|\t\t                                    \t\t|\
    \n\t\t\t\t\t\t|\t\t  PRESS '1' For Decimal System.\t\t\t|\
    \n\t\t\t\t\t\t|\t\t  PRESS '2' For Binary System.\t\t\t|\
    \n\t\t\t\t\t\t|\t\t  PRESS '3' For Octal System.\t\t\t|\
    \n\t\t\t\t\t\t|\t\t  PRESS '4' For Hexadecimal System.\t\t|\
    \n\t\t\t\t\t\t\t\t-------------------------------------\t\t\
    \n\
    \n\t\t\t\t\t\t\t\t  YOUR CHOICE HERE: ", cin>>y;
    cout<<"\n";

    //---------------------------------------------if the system is decimal--------------------------------------------------//
        if(y==1)
        {
            int x;
            cout<<"    Enter Your Number In Decimal System  [0-9]  : ", cin>>x;
            cout<<"    Number In Binary System.                    : ";
            decitobin(x);
            cout<<"\n    Number In Octal System.                     : ";
            decitooct(x);
            cout<<"\n    Number In Hexadecimal Sytem.                : ";
            decitohex(x);
        }
    //---------------------------------------------if the system is binary--------------------------------------------------//    
        else if(y==2)
        {
            int x;
            cout<<"    Enter Your Number In Binary System  [0,1]  : ", cin>>x;
            cout<<"    Number In Decimal System.                  : ";
            cout<<bintodeci(x);
            a=bintodeci(x);
            cout<<"\n    Number In Octal System.                    : ";
            decitooct(a);
            cout<<"\n    Number In Hexadecimal.                     : ";
            decitohex(a);
        }
    //---------------------------------------------if the system is octal--------------------------------------------------//    
        else if(y==3)
        {
            int x;
            cout<<"    Enter Your Number In Octal System  [0-7]: ", cin>>x;
            cout<<"    Number In Decimal System.               : ";
            cout<<octatodeci(x);
            b=octatodeci(x);
            cout<<"\n    Number In Binary.                       : ";
            decitobin(b);
            cout<<"\n    Number In Hexadecimal.                  : ";
            decitohex(b);
        }
    //---------------------------------------------if the system is hexadecimal------------------------------------------------//
        else if(y==4)
        {
            string x;
            cout<<"    Enter Your Number In Hexadecimal  [0-9] and [a-f]: ", cin>>x;
            cout<<"    Number In Decimal System.                        : ";
            cout<<hexatodeci(x);
            c=hexatodeci(x);
            cout<<"\n    Number In Binary System.                         : ";
            decitobin(c);
            cout<<"\n    Number In Octal System.                          : ";
            decitooct(c);
        }
        cout<<"\n";

    error:

    cout<<"\t\t\t\t\t\t\t\t-------------------------------------\t\t\n\
    \n\t\t\t\t\t\t|\t\t  Want to execute the Program ?\t\t\t|\n\
    \n\t\t\t\t\t\t\t\t-------------------------------------\t\t\n";
    cout<<"\n\t\t\t\t\t\t\t\t  Enter your choice (Y/N):\t", cin>>choice;

    if (choice == 'Y'|| choice == 'y')
    {
        goto execute;
    }
    else if (choice == 'N'|| choice == 'n' )
    {
        cout<<"\nThank You. Have a nice day..!!\n\n\n";
    }
    else{
        cout<<"\nError.!! Enter a valid choice.";
        cout<<"\n";
        goto error;
    }

    return 0;
}

//------------------------------------------------------functions01-------------------------------------------------------//
void decitobin(int numb)
{
    int remain[64];
    int j,n=numb,i=0;
    while(n>0)
    {
        remain[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=(i-1);j>=0;j--)
    {
        cout<<remain[j];
    }
}
//------------------------------------------------------functions02-------------------------------------------------------//
void decitooct(int numb)
{
    int n=numb,j,i=0;
    int remain[64];
    while(n>0)
    {
        remain[i]=n%8;
        n=n/8;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<remain[j];
    }
}
//------------------------------------------------------functions03-------------------------------------------------------//
void decitohex(int numb)
{
    int x=0;
	int arr[50]={};
	char alpha[6][2] = {{10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'},{14, 'E'}, {15, 'F'}};
    while(numb>0)
	{
		arr[x]=numb%16;
		x++;
		numb/=16;
	}
    for(int i=(x-1);i>=0;i--) 
	{
		if(arr[i]>=10) 
		{
			cout<<alpha[arr[i]-10][1];
		}
		else 
		{
			cout<<arr[i];
		}
	}
}
//------------------------------------------------------functions04-------------------------------------------------------//
int bintodeci(int numb)
{
    int a,d,i,n,r,x,y;
    a=numb;
    y=0;
    i=0;
    do
    {
        d=a%10;
        y=y+d*(pow(2,i));
        i++;
        a=a/10;
    }
    while(a>0);
    return(y);
}
//------------------------------------------------------functions05-------------------------------------------------------//
int octatodeci(int numb)
{
    int a,d,i,x,y;
    a=numb;
    y=0;
    i=0;
    do
    {
        d=a%10;
        y=y+d*(pow(8,i));
        i++;
        a=a/10;
    }
    while(a>0);
    return (y);
}
//------------------------------------------------------functions06-------------------------------------------------------//
int hexatodeci(string a)
{
    string c;
    int b = 0;
    string s = "0123456789abcdef";
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (a[i] == s[j])
            {
                c += j;
            }
        }
    }
    for (int i = 0; i < c.size(); i++)
    {}
    int t = 0;
    int p = c.size();
    while (p)
    {
        b += c[p - 1] * pow(16, t);
        p--;
        t++;
    }
    return (b);
}
//----------------------------------------------------------END-----------------------------------------------------------//