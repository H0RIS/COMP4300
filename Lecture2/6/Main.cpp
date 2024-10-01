import std;


void pp(int& i)
{
    std::cout << &i << " " << i << " " << sizeof(i) << "\n";

}

class IntArray
{
    size_t m_size;
    int* m_arr;

public:
    IntArray(size_t size)
        : m_size(size)
        , m_arr(new int[size])
    {
        std::cout << "Array Constructor\n";
    }

    ~IntArray()
    {
        delete[] m_arr;
        std::cout << "Array Destructor\n";
    }

    int get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index, int val)
    {
        m_arr[index] = val;
    }

    void print()
    {
        for (size_t i = 0; i < m_size; i++)
        {
            std::cout << i << " " << m_arr[i] << "\n";
        }
    }
};

int main()
{
    IntArray myArray(10);
    myArray.set(0, 10);
    myArray.set(4, 14);

    myArray.print();

    return 0;
}
