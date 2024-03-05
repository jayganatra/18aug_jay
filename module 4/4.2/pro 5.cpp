
#include<iostream>
#include<string.h>
using namespace std;
class cricketer 
{
	public:
	    string name,b;
		int i;
		void get()
		{
			for(i=1;i<=11;i++)
			{
		     	cout<<"enter the cricketer name : ";
		    	cin>>name;
		    }
		}
};
class batsman : public cricketer
{
	public:
		string name;
		int run,i=1,b;
		void show()
		{
			while(i<=5)
		
			    {
			        cout<<"enter the batsman name : ";
			        cin>>name;
			        cout<<"enter the batsman average run : ";
			        cin>>run;
			        run=run+run;
			        i++;
		        }
		}
		   void display()
		   {
		      cout<<"total run = "<<run;
	       }
};
int main()
{
	
	batsman obj;
	obj.get();
	obj.show();
	obj.display();	   
	
}
