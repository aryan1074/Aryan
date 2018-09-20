#include<iostream>
#include<conio.h>
struct student *s
{ 
	char name;
	int age;
	char branch;
	int year;
	int semester;
	int prevSemScore;
};
int main()
{ 
 int n,i,j,temp;
 n=0; temp=0; 
 student= struct malloc (size of (struct student));
 
 cout << "Enter no of Students for the database";
 cin >> n;
 
 for (i=0;i<n;i++)
  {
    cout << "Enter Student Name";
    cin >>	s.name;
 
    cout<< "Enter Student Age";
    cin >> s.age;
 
    cout << "Enter Branch Of student";
    cin >> s.branch;
 
    cout << "Enter Year";
    cin >> s.year;
 
    cout << "Enter Semester";
    cin >> s.semester;
 
    cout << " Enter Previous Year's Percentage";
    cin >> s.prevSemScore;
  }
  for(i=0;i<n;i++)
  {
  	for(j=1;j<n;j++)
  	{
  		if(s->prevSemScore[i] > s->prevSemScore[j] )
  		{
  			temp=s->prevSemScore[i];
  			s->prevSemScore[i]=s->prevSemScore[j];
  			s->prevSemScore[j]=temp;
		  }
	  }
	}
	
	for(i=0;i<n;i++)
	{
	  cout << s->name;
	  cout << s->age;
	  cout << s->branch;
	  cout << s->year;
	  cout << s->semester;
	  cout << s->prevSemScore;
    }
}
