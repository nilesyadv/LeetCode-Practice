/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    Node* dfs(unordered_map<Node*, Node*> &m, Node* node)
    {
        vector<Node*> neighbour;
        Node* clone = new Node(node -> val);
        m[node] = clone;
        for(auto it: node->neighbors)
        {
            if(m[it] != NULL)
            {
                neighbour.push_back(m[it]);
            }
            else
            {
                neighbour.push_back(dfs(m, it));
            }
        }
        clone -> neighbors = neighbour;
        return clone;
    }
public:
    Node* cloneGraph(Node* node) {
        if(node == NULL) return node;
        unordered_map<Node*, Node*> m;
        if(node -> neighbors.size() == 0)
        {
            Node* clone = new Node(node -> val);
            return clone;
        }
        return dfs(m, node);
    }
};