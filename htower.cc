#include <iostream>

using namespace std;

void  tower(int disks, char stilos_Arxi, char stilos_Telikos, char stilos_Mesi);

int main(){
  cout<<"number of disks: ";
  int n;
  cin>>n;
  cout<<endl;
  tower(n,'A', 'C', 'B');
  return 0;
}


void tower(int disks, char stilos_Arxi, char stilos_Telikos, char stilos_Mesi){

  if (disks==0){
       return ;
  }
  /* Θα γίνει χρήση αναδρομικής σχέσης για να μετακινηθούν οι n-1 δίσκοι από την Α στη Β και μετά ο ένας να πάει στη Γ και έπειτα οι άλλοι να πάνε από τη Β στη Γ. Θα χρησιμοποιηθούν 2 αναδρομικές σχέσης. Στη πρώτη μειώνεται ο αριθμός των δίσκων κατά 1 και στη δεύτερη γίνεται αλλαγή των θέσεων.*/

  tower(disks-1, stilos_Arxi, stilos_Mesi, stilos_Telikos);

  cout<<"Moving disk "<<disks<<" from "<<stilos_Arxi<<" to "<<stilos_Telikos<<endl;
  tower(disks-1, stilos_Mesi, stilos_Telikos, stilos_Arxi);

}
