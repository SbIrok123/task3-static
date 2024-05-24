

#include"Adaptor.h"
#include<vector>
#include<fstream>
int Adaptor::counter = 0;
int main()
{

	vector<Adaptor> a;
	a.push_back(Adaptor("USB 3.0", 50.80, 70));
	a.push_back(Adaptor("HDMI", 185, 100));
	a.push_back(Adaptor("VGA", 90.30, 200));

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i]<<endl;
	}
	
	ofstream file("task3.txt");
	if (file.is_open())
	{
		for (int i = 0; i < a.size(); i++)
		{
			file << a[i] << endl;
		}
		file.close();
	}
}
