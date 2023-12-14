//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n; cin>>n;
//	cin.ignore();
//	// de loai bo dau enter khi ket thuc lenh neu ko se ko thuc hien dc cau lenh tiep theo
//	string s;
//	getline(cin,s);
//	cout<<n<<endl;
//	cout<<s;
//	return 0;
//}
//
//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s;
////	while(cin>>s)// doc tung tu
////	cout<<s<<endl;
//	
//	while(getline(cin,s))// doc tung dong
//	cout<<s<<endl;
//	return 0;
//}


// bai 1: cho so nguyen khong am n, hay xac dinh chu so dung giua cua n, neu ko co thi in ra NOT FOUND

//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n; cin>>n;
//	string m = to_string (n);
//	if(m.size()%2 == 0)
//	cout<<"NOT FOUND";
//	else cout<<m[m.size()/2];
//	return 0;
//}




// chuyen thanh cac chu in hoa
#include<bits/stdc++.h>
using namespace std;

void inhoa(string &s)
{
	for(int i=0;i<s.size();i++)
	s[i] = toupper(s[i]);
}

int main()
{
	string s;
	getline(cin,s);
	inhoa(s);
	cout<<s<<endl;
	return 0;
}
