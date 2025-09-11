template <typename T>
LinkedList<T>::LinkedList()
: head(nullptr) { }

template <typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template <typename T>
void LinkedList<T>::append(const T& elem) {
    // TODO
    Node * newNode = new Node(elem);

    if(head == nullptr)
    {
        head = newNode;
    }
    else{
        Node * curr = head;
        while(curr->next != nullptr)
        {
            curr = curr->next;
        }

        curr->next = newNode;
    }

    this->length++;

}

template <typename T>
void LinkedList<T>::clear() {
    // TODO

    Node * curr = head; 

    while(curr != nullptr)
    {
        Node * nextNode = curr->next;
        delete curr;
        curr = nextNode;
    }

    head = nullptr;
    this->length = 0;


}

template <typename T>
T LinkedList<T>::getElement(int position) const {
    // TODO
    Node * curr = head;
    

    for(int i = 0; i < position; i++)
    {
        if(curr == nullptr)
        {
            throw string("Position is out of range!");
        }
        curr = curr->next;
    }

    if(curr == nullptr)
    {
        throw string("Position is out of range!");
    }

    return curr->value;


}

template <typename T>
int LinkedList<T>::getLength() const {
    return this->length;
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return this->length == 0;
}

template <typename T>
void LinkedList<T>::replace(int position, const T& elem) {
    // TODO
    Node * curr = head;

    for(int i = 0; i < position; i++)
    {
        if(curr == nullptr)
        {
            throw string("Position is out of range!");
        }
        curr = curr->next;
    }
    if(curr == nullptr)
    {
       throw string("Position is out of range");
    }

    curr->value = elem;


}

template <typename T>
ostream& operator<<(ostream& outStream, const LinkedList<T>& myObj) {
    if (myObj.isEmpty()) {
        outStream << "List is empty, no elements to display.\n";
    }
    else {
        typename LinkedList<T>::Node* curr = myObj.head;
        while (curr != nullptr) {
            outStream << curr->value;
            if (curr->next != nullptr) {
                outStream << " --> ";
            }
            curr = curr->next;
        }
        outStream << endl;
    }

    return outStream;
}
