//
// Created by ric on 2/6/25.
//
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
        pushAt(length(), elem);
    }

    /**
     * La funzione aggiunge in testa un elemento T
     * @param elem
     */
    void pushFront(T elem) {
        pushAt(0, elem);
    }

    /**
     * La funzione aggiunge in una posizione precisa un elemento
     * @param index
     * @param elem
     */
    void pushAt(int index, T elem) {
        if (index < 0) {
            return;
        }

        cell *newCell = new cell{elem, nullptr};
        if (index == 0) {
            newCell->next = head;
            head = newCell;
            return;
        }

        // Scorriamo la lista fino alla posizione giusta
        cell *current = head;
        int i = 0;
        while (current && i < index - 1) {
            current = current->next;
            i++;
        }

        // Se l'indice è fuori dal range
        if (!current) {
            delete newCell;
            return;
        }

        // Inseriamo il nuovo nodo nella posizione giusta
        newCell->next = current->next;
        current->next = newCell;
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
        if (isEmpty()) return;
        if (head->payload == elem) {
            pop();
            return;
        }
        cell *current = head;
        while (current->next && current->next->payload != elem) {
            current = current->next;
        }

        // Se abbiamo trovato l'elemento, lo rimuoviamo
        if (current->next) {
            cell *temp = current->next;
            current->next = temp->next;
            delete temp;
        }
    }

    /**
     * La funzione rimuove un elemento dato il suo indice
     * @param index
     */
    void removeAt(int index) {
        if (isEmpty() || index < 0 || index >= length()) return;

        if (index == 0) {
            pop();
            return;
        }

        cell *prev = head;
        for (int i = 0; i < index - 1; i++) {
            prev = prev->next;
        }

        cell *toDelete = prev->next;
        if (toDelete) {
            prev->next = toDelete->next;
            delete toDelete;
        }
    }

    bool has(T elem) {
        cell* tmp = head;
        while (tmp && tmp->payload != elem) {
            tmp = tmp->next;
        }
        return tmp != nullptr;
    }

    int indexOf(T elem) {
      if(!has(elem)) return -1;
      int counter = 0;
      cell *tmp = head;
      while (tmp && tmp->payload != elem) {
        counter++;
        tmp = tmp->next;
      }
      return counter;
    }

    /**
     * La funzione elimina il primo elemento (in testa) e lo restituisce.
     * @return
     */
    T pop() {
        if (!head) {
            return T();
        }

        T elem = head->payload;
        cell *tmp = head;

        head = head->next;
        delete tmp;

        return elem;
    }

    bool isEmpty() {
        return this->length() == 0;
    }
};