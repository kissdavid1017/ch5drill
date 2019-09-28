#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    //1. cout << "Success!\n"; //error: the first character was C
    //2. cout << "Success!\n";  //error: missing a coma
    //3.cout << "Success" << "!\n"; same error + missed the ";"
    /* 4.string success="Success!";
    cout << success << '\n'; */
   //5. int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; error : string is not an integer
  //6. vector<int> v(10); [v]5 = 7; if (v[5]!=7) cout << "Success!\n";
  /*7. bool cond=true;
  if (cond) cout << "Success!\n"; else cout << "Fail!\n";*/
 // 8. bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
  //9. string s = "ape"; bool c = "fool";s=c; if (c) cout << "Success!\n";
  /* 10. string s = "ape";
  bool c = "fool";
  cout<<"s=";cin>>s;
   if (s=="fool") cout << "Success!\n";*/
  // 11.  string s = "ape"; if (s=="ape") cout << "Success!\n";
 /* 12. string s = "ape"; string f ="fool";
  string c;
  cout<<"irj be valamit: ";cin>>c;
    if (c==s+f) cout << "Success!\n";*/
   //13. vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n"; error: "0<size()" was incorrect
  //14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; it was correct
  //15. int n; string s = "Success!\n"; n=s.size(); for (int i=0; i<n; ++i) cout << s[i];
 //16. bool tarolo=true; if (tarolo) cout << "Success!\n"; else cout << "Fail!\n";
 //17. int a = 2000; int b=52; a=a*b;b=a/b;a=a/b;  if (b==2000) cout << "Success!\n";
 //18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; //correct
//19. vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";// vector v(5): incorrect declaration
//20. int i=0; int j = 9; while (i<10){ j--;i++;} if (j<i) cout << "Success!\n";
//21. int x = 2; double d; d= 4.5; if (d==2*x+0.5) cout << "Success!\n";
//22. string s = "Success!"; for (int i=0; i<=8; ++i) cout << s[i];
// 23. int i=0;int j=10; while (i<10) {i++;j--;} if (j<i) {cout << "Success!\n";}

// 24. int x = 4; double d = 5.0/(x-2); if (d==((x-2)+0.5)){ cout << "Success!\n";} else cout<<"Fail!";

//25. cout << "Success!\n";










}
