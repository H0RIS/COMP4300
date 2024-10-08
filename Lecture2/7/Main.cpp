import std;


void pp(int& i)
{
    std::cout << &i << " " << i << " " << sizeof(i) << "\n";

}

template <typename T>
class DynamicArray
{
    size_t m_size;
    T* m_arr;

public:
    DynamicArray(size_t size)
        : m_size(size)
        , m_arr(new T[size])
    {
        std::cout << "Array Constructor\n";
    }

    ~DynamicArray()
    {
        delete[] m_arr;
        std::cout << "Array Destructor\n";
    }

    T get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index, T val)
    {
        m_arr[index] = val;
    }

    T& operator[](size_t index)
    {
        return m_arr[index];
    }

    const T& operator[](size_t index) const
    {
        return m_arr[index];
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
    DynamicArray<double> myArray(10);
    myArray.set(0, 10.1);
    myArray.set(4, 14.5);

    myArray[3] = 3.14;
    myArray[2] = 2.78;

    myArray.print();

    const DynamicArray<double> myArray2(10);

    std::cout << myArray2[4] << '\n';

    return 0;
}
