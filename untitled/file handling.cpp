//  #include <iostream>
//  #include <fstream>
//  #include <string>
//
//  using namespace std;
//
//
//  int main(){
//      freopen("input.txt","r",stdin);
//      string num;
//      cin>>num;
//
//      freopen("output.txt","w",stdout);
//      cout<<num<<endl;
//  //freopen لتغييير مكان(output /input)
//  //====================================================//
//  /* _____fstream==>(WRITE  /  READ / APPEND)
//  special fstream:
//          ifstream==>to read from file only
//          ofstream==>to write in file only
//  */
//      //READ
//      ifstream input("input.txt");
//     //or
//      ifstream out;
//      out.open("output.txt");==>out<<var
//
//      fstream inputFile("filee.txt",ios::in);
// //============ =========== ===========
//     //write
//      ofstream out2("out2.txt");
//      //or
//      ofstream out2;
//      out2.open("out2.txt");=======>out>>var
//
//      fstream outFile("outfile.txt",ios::out);
//  //=====================================
//      //both
//      fstream ffile("ffile.txt",ios::in|ios::out);
//
//      return 0;
//
// (cin.get(var_name)=====> طباعة + مراعاة المسافات)
//  }
//
