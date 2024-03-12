#include <iostream>
using namespace std;
int main(){
  int n;
  cout  << "Enter the number of rows: ";
  cin >> n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    cout << "* ";
  }
  cout<<endl;
}
 cout<<endl;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){
    cout << "* ";
  }
  cout<<endl;
}
  cout<<endl;


 for(int i=0;i<=n;i++){//rows
   for(int j=0;j<=n-i-1;j++){//spaces
    cout <<"  ";
   }
   for(int j=0;j<=i;j++){//stars
    cout << "* ";
  }
  cout<<endl;
}
cout<<endl;

 for(int i=1;i<=n;i++){//rows
   for(int j=1;j<=n-i;j++){//spaces
    cout <<"  ";
   }
   for(int j=1;j<=i;j++){//stars
    cout << "* ";
  }
  cout<<endl;
}
}

