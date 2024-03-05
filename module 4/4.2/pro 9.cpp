#include<iostream>
#include<conio.h>
using namespace std;
class operate
{
	public:
			int i,n,a[50];
	void get()
	{ 
	
	    for(i=1;i<=2;i++)
	    {
		    cout<<endl<<"enter elements of 1s matrix: ";
		    cin>>a[i];
	    }
    }
    operate operator +(operate &b)
	{
	    operate sum;
	    for(i=1;i<=2;i++)
	    {
            sum.a[i]=a[i]+b.a[i];
        }
        return sum;
		return sum;
	}
	
    void display()
    {
    	 for (i=1; i<=2;i++)
            {
                cout<<"\nyour number is ="<<a[i];
            }
	}
	
};
int main()
{
	operate obj1,obj2,obj3;
	obj1.get();
	obj1.display();
	obj2.get();
	obj2.display();
	obj3=obj1+obj2;
	obj3.display();
	getch();
}

