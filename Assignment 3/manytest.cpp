#include<iostream>
using namespace std;

int main()
{
  int count=1,max=-1,min=101,score,total=0;
  float average;
  do
  {
    cout<<"Enter test score "<<count<<" : ";
    cin>>score;

    if(score>=0&&score<=100)
    {
      if(max<score)
        max=score;
      if(min>score)
        min=score;
      total+=score;
      }
      count++;
  }while(score>=0&&score<=100);
    count=count-2;
    cout<<"you entered "<<count<<" scores"<<" : ";
    cout<<"Maximum score = "<<max<<" : ";
    cout<<"Minmum score ="<<min<<" : ";
    cout<<"Average score ="<<(double)total/count<<" : ";

    return 0;

}
