#include <iostream>

using namespace std;

int main(void)
{
  int w;
  while(1)
  {
    cin>>w;

    if(w>=1&&w<=100)
      break;
  }

  if(w%2==0&&w>2)
    cout<<"YES"<<'\n';
    else
      cout<<"NO"<<'\n';

  return 0;
}
