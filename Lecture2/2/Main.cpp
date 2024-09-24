import std;

int main()
{
    std::vector<int> vec;
    vec.push_back(42);
    vec.push_back(10);
    vec.push_back(11);

    std::cout << vec[0] << std::endl;
    std::cout << vec[1] << std::endl;
    //std::cout << vec[2] << std::endl;

    std::cout << "===\n";

    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
    std::cout << "===\n";

    for (auto& a : vec)
    {
        std::cout << a << std::endl;
    }

    return 0;
}
