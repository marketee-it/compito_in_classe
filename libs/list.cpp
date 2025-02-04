
template<typename T>
class List{

    private:
        struct cell{
            T payload;
               cell * next;
        };
        cell* head = nullptr;

    public:
        /**
         * La funzione aggiunge in coda un generico elemento T
         * @param elem
         */
        void pushBack(T elem){

        }

        /**
         * La funzione aggiunge in testa un elemento T
         * @param elem
         */
        void pushFront(T elem){

        }

        /**
         * La funzione aggiunge in una posizione precisa un elemento
         * @param index
         * @param elem
         */
        void pushAt(int index, T elem){

        }

        /**
         * La funzione conta gli elementi presenti nella lista
         * @return La f
         */
        int length(){

            return 0;
        }

        /**
         * La funzione rimuovere un elemento dalla lista
         * @param elem
         */
        void remove(T elem){

        }

        /**
         * La funzione rimuove un elemento dato il suo indice
         * @param index
         */
        void removeAt(int index){

        }
        T pop(){

            return nullptr;
        }

        bool isEmpty(){
            return this->head == nullptr;
        }
        


};