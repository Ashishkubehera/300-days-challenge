//function to write the search algorithm in bst
#include<bits/stdc++.h>
using namepace std;

int main()
    /*compare root with the input
    if it's greater then go the right
    and if it's smaller then go to the left
    and while doing this recursively
        if the key matches with the value
            just print true;
            else print false;*/
{

}
bool search(node *root, int x)
{
    if(root==Null)
        return false;
    else if(root->key==x)
        return true;
    else if(root->key>x)
        return search(root->left, x);
    else
        return search(root->right,x);

}
//time complexity is big O(H)
// auxilliary space required by the space in O(h) and iterative auxiliary space is O(1)
