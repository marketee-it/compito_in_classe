struct Customer {
    int id{};
    std::string first_name{};
    std::string last_name{};
    std::string email{};
    std::string card_number{};
};

class Customers {
    private:
        List<Customer> customers{};

    public:
        /**
         *
         * @param customer
         * @descr Il metodo deve aggiungere un cliente.
         */
        void addCustomer(Customer customer) {

        }

        /**
         *
         * @param id
         * @descr Il metodo deve restuire un cliente dato il suo ID o un cliente vuoto se non trovato
         */
        Customer searchById(int id) {
            Customer c;

            return c;
        }

        /**
         * Il metodo deve restituire un cliente dato il suo numero di carta o un cliente vuoto se non trovato
         * @param card_number
         */
        Customer searchByCardNumber(std::string card_number) {
            Customer c;

            return c;
        }


        /**
         * Il metodo deve restituire se il confronto con il cliente è vuoto o meno
         * @return bool
         */
        bool isEmpty(Customer customer) {
            return false;
        }


};