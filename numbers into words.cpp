#include<iostream>
#include<cmath>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{
    int a,k,j,l,r;
    char unit[][20]={"one","two","three","four","five","six","seven","eight","nine","ten"};
    char eleven[][20]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char tens[][20]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","hundred"};
    
    cout<<"Enter the number"<<endl;
    cin>>a;
    if(a>1000)
    {
    cout<<"Entered number is greater than 1000,please re enter number:";
    cin>>a;
    }
    else
    {
        k=a/100;
        if(k==10)
        cout<<"The number entered is one thousand";
        else if(k!=10 && k!=0)
        cout<<unit[k-1]<<" hundred and ";
        r=a%100;
        j=r/10;
        l=r%10;
        if(j==1)
        cout<<eleven[l-1];
        else if(j==0)
        cout<<unit[l-1];
        else
        {
        cout<<tens[j-1]<<" ";
        cout<<unit[l-1];
        }
    }  
    getch(); 
    return 0;
}   
