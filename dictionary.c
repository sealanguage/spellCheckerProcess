// Implements a dictionary's functionality

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

#define CHAR_TO_INDEX(c) ((int)c - (int)'a') 

// Represents number of children for each node in a trie
#define N 27
// const int CASE = 'a';

// Represents a node in a trie
typedef struct trieNode
{
    bool is_word;
    struct node* children[N];
    struct node* parent;
    int occurrences; 
}trieNode;

// Represents a trie
trieNode *root;
// node *parent = NULL;


// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Initialize trie
    root = malloc(sizeof(trieNode));
    if (root == NULL)
    {
        return false;
    }
    root->is_word = false;
    for (int child = 0; child < N; child++)
    {
        //  create 17 children pointers all set to NULL
        root->children[child] = NULL;
    }

    // Open dictionary
    FILE *file = fopen(dictionary, "r");
    printf("dictionary is here");
    if (file == NULL)
    {
        unload();
        return false;
    }

    // Buffer for a word
    char word[LENGTH + 1];
    
    // Insert words into trie
    while (fscanf(file, "%s", word) != EOF)   //  while the dictionary has words in it
    {
        // TODO
        root = malloc(sizeof(trieNode));
        
//      for every work in the dictionary
//          for each letter in the dictionary
//              if (the lette points to NULL)
//                  malloc a new trieNode
//                      Have children[i] point to it
//              
//              if (the letter does not point to NULL)
//                  malloc a new node
//                      move to a new node
//                          continue
//                          
//              if (EOW is true)
//                  set is_word to true
//                  update word counter
         
       
        
            
//             {    
//             if (nav->children[child] == NULL)
//             {
//                 while (*word != 0)
//                 {
//                     currentNode->children->child[word - CASE] = currentNode()

//                     currentNode->[word - CASE]->parent = currentNode
//                 }
//             currentNode = currentNode->children->child[word - CASE]
//             word++
//             }
//             
// Inserting a key into Trie is a simple approach. 
// Every character of the input key is inserted as an individual Trie node.
// Note that the children is an array of pointers (or references) to next level trie nodes. 
// The key character acts as an index into the array children. 
// If the input key is new or an extension of the existing key, we need to construct non-existing nodes of the key, and mark end of the word for the last node. 
// If the input key is a prefix of the existing key in Trie, we simply mark the last node of the key as the end of a word. 
// The key length determines Trie depth.
        }
//     }     

    // Close dictionary
    fclose(file);

    // Indicate success
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    // Searching for a key is similar to insert operation, 
    // we only compare the characters and move down. 
    // search can terminate due to the end of a string if the isEndofWord field of the last node is true, then the key exists in the trie. 
    // 
    // search can terminate due to lack of key in the trie, the search terminates without examining all the characters of the key, since the key is not present in the trie.
    return false;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO

    return false;
}
