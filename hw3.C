#include <iostream>
#include <string>
#include <climits>

#include "shapes.h"
#include "readNum.h"

using namespace std;

int main()
{
	bool done=false;
	while (done!=true){
		cout<<"\nThis program calculates the area and volume of shapes\n\n";
		cout<<"Options\n\n1~Cube\n2~Sphere\n3~Cylinder\n4~Sphere\n5~Rectangle\n6~Quit\n\n";
		int m=readInt("Please choose an option by number: ",1,6);
		switch (m){
			case 1:
				cube();
				break;
			case 2:
				sphere();
				break;
			case 3:
				cylinder();
				break;
			case 4:
				cone();
				break;
			case 5:
				rectangle();
				break;
			case 6:
				cout<<"Have a radical day!\n";
				done=true;
				break;
			default:
				cerr<<"Something went wrong...\n";
		}
	}
	return 0;
}