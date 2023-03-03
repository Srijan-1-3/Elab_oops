/* One of Jonny's Birthday present is a colourbook in the shapeof an infinite plane */

#include <iostream>
using namespace std;
class ColourBook {
 public:virtual void Colouring()=0; 
};
class Rectangles:public ColourBook{
 public:
 void Colouring(){
 int n,x,y,z,w;
 cin>>n;
 cout<<"YES\n";
 while(n--){
 cin>>x>>y>>z>>w;
 cout<<abs((x%2))*2+abs((y%2))+1<<"\n";
 }
 }
};
int main()
{
 Rectangles obj;
 obj.Colouring();
return 0;
}
