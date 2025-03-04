#include<bits/stdc++.h>
#include<memory>
int main() {
    std::unique_ptr<int> p1{new int{10}};
    std::cout<<p1.get()<<std::endl;
    std::cout<<*p1<<std::endl;
    return 0;
}