import std;

class Student
{
public:
    Student();
    Student(std::string first, std::string last, int id, float avg);
    ~Student();
    std::string getFirst();
    std::string getLast();
    int getId();
    float getAvg();

private:
    std::string m_first = "First";
    std::string m_last = "Last";
    int         m_id = 0;
    float       m_avg = 0.0f;
};

Student::Student()
{
}

Student::~Student()
{
}

Student::Student(std::string first, std::string last, int id, float avg)
    : m_first(first)
    , m_last(last)
    , m_id(id)
    , m_avg(avg)
{
}

std::string Student::getFirst()
{
    return m_first;
}

std::string Student::getLast()
{
    return m_last;
}

int Student::getId()
{
    return m_id;
}

float Student::getAvg()
{
    return m_avg;
}

int main()
{


    return 0;
}
