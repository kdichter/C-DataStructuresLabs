// Local includes

#include "SearchTree.hpp"
#include <cstdlib>
#include <iostream>
#include <iterator>

/************************************************************/
// Using declarations

using std::cout;
using std::endl;

/************************************************************/
//Function prototypes/global vars/type definitions

template<typename T>
void 
printTree (SearchTree<T>& tree);

/************************************************************/
int
main (int argc, char* argv[])
{
    //cout << "creates a tree" << endl;
    SearchTree<int> tree;

    // cout << "inserts 3, 1, 2 into the tree " << endl;
    // tree.insert (3);
    // tree.insert (1);
    // tree.insert (2);
    //printTree (tree);
    //tree.clear ();

    cout << "inserts 4, 2, 1, 3, 6, 5, 7 into the tree" << endl;
    tree.insert (4);
    tree.insert (2);
    tree.insert (1);
    tree.insert (3);
    tree.insert (6);
    tree.insert (5);
    tree.insert (7);
    cout << tree << endl;

    cout << "deletes 7, 6, 5 in that order" << endl;
    tree.erase (7);
    tree.erase (6);
    tree.erase (5);
    cout << tree << endl;

    auto it = tree.end ();
    it++;
    cout << "minimum value of the tree is " << *it << endl;
    it = tree.end (); 
    it--;
    cout << "maximum value of the tree is " << *it << endl;

    // cout << "creates a copy of the tree" << endl;
    // SearchTree<int> treeCopy (tree);
    // cout << "copied the tree" << endl;
    // printTree (treeCopy);
    // treeCopy.insert (5);
    // cout << "added 5 to the tree and prints it" << endl;
    // printTree (treeCopy);

    /*
                              50
                      17               72
                12        23      54       76
              9     14   19          67
    */
    // cout << "inserts 50, 17, 72, 12, ... into the tree " << endl;
    // tree.insert (50);
    // tree.insert (17);
    // tree.insert (72);
    // tree.insert (12);
    // tree.insert (23);
    // tree.insert (54);
    // tree.insert (76);
    // tree.insert (9);
    // tree.insert (14);
    // tree.insert (19);
    // tree.insert (67);
    // //tree.insert (66);
    // printTree (tree);
    // cout << tree;

    // cout << "inserts 10, 8, 7, 9, 12, 11, 13 into a new tree" << endl;
    // tree.insert (10);
    // tree.insert (8);
    // tree.insert (7);
    // tree.insert (9);
    // tree.insert (12);
    // tree.insert (11);
    // tree.insert (13);
    // tree.insert (15);
    // cout << tree;
    //printTree (tree);
    //cout << "depth of the tree is " << tree.depth () << endl;

    // cout << "erases 3 from the tree " << endl;
    // tree.erase (3);
    // printTree (tree);

    // auto it = tree.end ();
    // it--;
    // cout << "value at end of list " << *it << endl;
    // it++;
    // cout << "value after the end of list " << *tree.end () << endl;
    

    // cout << "clears the tree" << endl;
    // tree.clear();
    // printTree (tree);
    
    return 1;
}

template<typename T>
void
printTree (SearchTree<T>& tree)
{
  auto it = tree.begin ();
  cout << "[ ";
  //size_t count = 0;
  while (it != tree.end ()) //count < tree.size (); it != tree.end ();
  {
    cout << *it << " ";
    it++;
    //count++;
  }
  cout << "]" << endl;
}