#include <stack>
#include <iostream>
#include "trees.h"



int main(){
    Node C;
    C.item = 1;
    C.left =nullptr;
    C.right = nullptr;

    Node B;
    B.item = 1;
    B.left = nullptr;
    B.right = nullptr;

    Node A;
    A.item = 1;
    A.left = &B;
    A.right = &C;

    std::cout <<"Number of Nodes: "<< countNodes(&A)<<"\n";

}
