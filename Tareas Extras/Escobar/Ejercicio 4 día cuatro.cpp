 #include <iostream>
template <int N>
int fact(){
 return N*fact<N-1>();
}
template <>
int fact<0>(){
 return 1;
}
int main(){
 std::cout << fact<5>() << std::endl;
 return 0;
}
