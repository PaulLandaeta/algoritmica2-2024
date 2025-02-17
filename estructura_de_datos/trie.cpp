#include <bits/stdc++.h>
#define input freopen("inTrie.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

struct node
{
    char currentCharacter;
    bool endOfWord;
    node *children[26];
    node()
    {
        endOfWord = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
};

void insert(node *trie, string word)
{
    node *currentNode = trie;
    for (int i = 0; i < word.size(); i++)
    {
        int index = word[i] - 'a';
        if (currentNode->children[index] == NULL)
        {
            currentNode->children[index] = new node();
        }
        currentNode = currentNode->children[index];
        currentNode->currentCharacter = word[i];
    }
    currentNode->endOfWord = true;
}

bool search(node *trie, string word)
{
    node *currentNode = trie;
    for (int i = 0; i < word.size(); i++)
    {
        int index = word[i] - 'a';
        if (currentNode->children[index] == NULL)
        {
            return false;
        }
        currentNode = currentNode->children[index];
    }
    return currentNode->endOfWord;
}

int main()
{
    // input;
    int wordsNumber;
    cin >> wordsNumber;

    node *trie = new node();

    while (wordsNumber--)
    {
        string word;
        cin >> word;
        insert(trie, word);
    }

    if (search(trie, "apt"))
    {
        cout << "existe la palabra apt" << endl;
    }
    else
    {
        cout << "No existe la palabra apt" << endl;
    }

    if (search(trie, "appli"))
    {
        cout << "existe la palabra appli" << endl;
    }
    else
    {
        cout << "No existe la palabra appli" << endl;
    }

    if (search(trie, "application"))
    {
        cout << "existe la palabra application" << endl;
    }
    else
    {
        cout << "No existe la palabra application" << endl;
    }
    insert(trie,"appli");
    if (search(trie, "appli"))
    {
        cout << "existe la palabra appli" << endl;
    }
    else
    {
        cout << "No existe la palabra appli" << endl;
    }
}