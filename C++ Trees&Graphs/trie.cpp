/*  TRIE  
Similar to tree 

Main Purpose of Trie

Used in:

    Dictionary
    Autocomplete
    Spell checker
    Search suggestions
    Contact searching
    Prefix matching
*/
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i = 0; i < 26; i++){
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};

int main(){
    
}