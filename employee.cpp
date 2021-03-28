#include<iostream>

using namespace std;
       class Employee
       {
              private:
              int code;
              char Name[25];
              

              public:
              void GetData();
              void PutData();
              long Gross_Salary;
       };

       void Employee :: GetData()           
       {
              cout<<"\n\tEnter Employee code : ";
              cin>>code;

              cout<<"\n\tEnter Employee Name : ";
              cin>>Name;


              cout<<"\n\tEnter Employee Gross Salary : ";
              cin>>Gross_Salary;
       }

       void Employee :: PutData()       
       {
              cout<<"\n\nEmployee code: "<<code;
              cout<<"\nEmployee Name : "<<Name;
              cout<<"\nEmployee Gross Salary : "<<Gross_Salary;
       }

       int main()
       {

               Employee A;
               Employee B;
               Employee C;
               Employee D;
               Employee E;
               Employee F;
               Employee G;
               Employee H;
               Employee I;
               Employee J;

               A.GetData();
               B.GetData();
               C.GetData();
               D.GetData();
               E.GetData();
               F.GetData();
               G.GetData();
               H.GetData();
               I.GetData();
               J.GetData();

               A.PutData();
               B.PutData();
               C.PutData();
               D.PutData();
               E.PutData();
               F.PutData();
               G.PutData();
               H.PutData();
               I.PutData();
               J.PutData();
               int n;
	Employee o[4];

	int i,j ,z=0,l=0;
	cout<<"enter the employee details ";
	cin>>n;
	for(i=0;i<n;i++)
	{

		o[i].GetData();
		if(o[i].Gross_Salary>o[z].Gross_Salary)
		{
			z=i;
		}
		if(o[i].Gross_Salary<o[z].Gross_Salary)
		{
			l=i;
		}
	}
		
	o[z].PutData();
        
    o[l].PutData();
     
        return 0;
       }