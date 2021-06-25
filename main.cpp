#include <iostream>
std::string name{"PowerVM"};std::string version{"0.0.0.0"};
std::string fms{"WARNING! "+name+" IS NOT READY FOR PUBLIC USAGE YET!\nUSE OTHER SOFTWARE SUCH AS QEMU, KVM, VBOX, OR OTHERS."};
std::string thead(){
  return name+" "+version;
}
int main(){
  std::cout<<thead()<<"\n";
  std::cout<<fms<<"\n";
}