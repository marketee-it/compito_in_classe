template<typename T>
class List {
private:
    struct cell {
        T payload;
        cell *next;
    };

    cell *head = nullptr;

public:
    /**
     * La funzione aggiunge in coda un generico elemento T
     * @param elem
     */
    void pushBack(T elem) {
    }

    /**
     * La funzione aggiunge in testa un elemento T
     * @param elem
     */
    void pushFront(T elem) {
        cell *tmp_cell = new cell;
        tmp_cell->payload = elem;
        tmp_cell->next = head;
        head = tmp_cell;
    }

    /**
     * La funzione aggiunge in una posizione precisa un elemento
     * @param index
     * @param elem
     */
    void pushAt(int index, T elem) {
    }

    /**
     * La funzione conta gli elementi presenti nella lista
     * @return La f
     */
    int length() {
        int counter = 0;
        cell *tmp = head;
        while (tmp != nullptr) {
            counter++;
            tmp = tmp->next;
        }
        return counter;
    }

    /**
     * La funzione rimuovere un elemento dalla lista
     * @param elem
     */
    void remove(T elem) {
    }

    /**
     * La funzione rimuove un elemento dato il suo indice
     * @param index
     */
    void removeAt(int index) {
    }

    /**
     * La funzione elimina il primo elemento (in testa) e lo restituisce.
     * @return 
     */
    T pop() {
        T elem = head->payload;
        cell *tmp = head->next;
        head->next = tmp->next;
        delete tmp;
        return elem;
    }

    bool isEmpty() {
        return this->length() == 0;
    }
};
