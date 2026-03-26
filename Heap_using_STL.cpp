#include<iostream>
#include<queue>
using namespace std;
int main()
{
  
  cout<<" Max Priority Queue is here:"<<endl;
  priority_queue<int> pq;
  pq.push(5);
  pq.push(2);
  pq.push(4);
  cout<<"Top element is:"<<pq.top()<<endl;
  pq.pop();
  cout<<"Top element is:"<<pq.top()<<endl;
  pq.pop();
  cout<<"Top element is:"<<pq.top()<<endl;
  pq.pop();
   if(pq.empty())
   {
     cout<<"Prrority queue is empty:"<<endl;
   }
   else
   {
     cout<<"Prioerty queue is not empty:"<<endl;
   }
   
  cout<<"Minimum priority queue is:"<<endl;
  priority_queue<int,vector<int>,greater<int>> pq1;
  pq1.push(5);
  pq1.push(2);
  pq1.push(4);
  cout<<"Top element is:"<<pq1.top()<<endl;
  pq1.pop();
  cout<<"Top element is:"<<pq1.top()<<endl;
  pq1.pop();
  cout<<"Top element is:"<<pq1.top()<<endl;
  pq1.pop();
   if(pq1.empty())
   {
     cout<<"Prrority queue is empty:"<<endl;
   }
   else
   {
     cout<<"Prioerty queue is not empty:"<<endl;
   }
  return 0;
}