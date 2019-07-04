#include<iostream>
using namespace std;
class twovalues
{
  int a,b;
  public:
    void read()
    {
      cout<<"Enter a,b:\n";
      cin>>a>>b;
    }
    friend class min_max;

};
class min_max
{
  public:
    void result(twovalues obj)
    {
      if(obj.a>obj.b) cout<<"A is greater"<<endl;
      else cout<<"B is greater"<<endl;
    }

};

int main()
{
  twovalues ob;
  ob.read();
  min_max ob1;
  ob1.result(ob);
}
