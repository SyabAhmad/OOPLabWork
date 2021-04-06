#include <iostream>
using namespace std;
class student
{
    private:
        int Roll_Number;
        string name;
        
    public:
    	int marks[5];
    void input()
    {
        cout<<"**************UoS**************"<<endl;
        cout<<"Enter your marks in descending order"<<endl;
        for(int i=1;i<=5;i++)
        {
        	cout<<i<<" : ";
            cin>>marks[i];
            cout<<endl;
        }
        
    }
    
};
class exam: public student
{
    public:
    	float average;
    	int sum;
    	void process()
    	{
    	for(int i=1;i<=5;i++)
    	{
    		sum=marks[i];
		}
		average = sum/5;
	}	
};
class result: public student, public exam
{
	public:
		
		void result1(){
		exam::process();
		cout<<"YOur result"<<endl;
		cout<<"Sum = "<<sum<<endl;
		cout<<"Average = "<<average<<endl;
	}
};

int main()
{
	student st1;
	exam exam1;
    result result2;
    st1.input();
    exam1.process();
    result2.result1();
    return 0;
}

