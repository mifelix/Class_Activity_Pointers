#include <iostream>
using namespace std;
int main(){
int i,j,k;
i = 10;
j = ++i;
k=i++;
cout <<"i="<<i<<endl;
cout <<"j="<<j<<endl;
cout <<"k="<<k<<endl;
return 0;
}

//Output: 
//i=12
//j=11
//k=11