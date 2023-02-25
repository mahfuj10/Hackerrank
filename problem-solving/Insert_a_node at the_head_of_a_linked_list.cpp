class Node
{
    constructor(data, next = null)
    {
        this.data = data;
        this.next = next
    }
} function insertNodeAtHead(head, data)
{
    head = new Node(data, head) return head
}