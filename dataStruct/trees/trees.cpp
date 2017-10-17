#include <stack>
#include <iostream>
#include "trees.h"
//Implimentaion of Algorithm T from D.Knuth TAOCP pg. 320
//

int countNodes(Node *root){
//////////////////////////////////////////
//  
// 
//                                                  P <- LLINK(P)
//                                        ____________________________
//                                        |                           |
//                                        V                           |
//  //////////////////             ///////////////   NO     ///////////////////
// //T1. Initalize// -----------> /T2. P = empty?/------>//T3.  Stack <= P //
// //////////////////             //////////////           ///////////////////
//                                 /         ^
//                          YES   /          |_________
//                               /                     |
//                              /                      | P <- RlINK(P)
//                             V                       |    
//                       ///////////////////         ///////////////
//                      // T2. p <= Stack / ------> //T5. Visit P//    
//                     ///////////////////         ////////////////
//                             |
//                             |Empty
//                             V
//

    int count = 0;
    std::stack<Node*> PointerStack;
    Node *Pointer = root;

    while(true){
        if(!Pointer){
            if(PointerStack.empty()){
                return count;
                
            }

            Pointer = PointerStack.top();
            PointerStack.pop();
            count += 1;
            
            Pointer = Pointer->right;
            continue;
        }else{
            PointerStack.push(Pointer);
            Pointer = Pointer->left;
        }

    }

}



//Implementation of Algorithm S from D.Knuth TAOCP pg.323
//If P points to a node of a threaded binary tree, this algorithm set Q<-P$ (inorder successor)

Node *Next(Node * node)
{
    Node *Q = node->right;
    if(Q->RTAG) return Q;
    while(true)
    {
        if(!Q->LTAG)
        {
            Q = Q->left;
            continue;
        }
        return Q; // null pointer returned if input is last node// do something
    }
}






