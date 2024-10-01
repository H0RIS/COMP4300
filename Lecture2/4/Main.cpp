import std;

class Student
{
public:
    Student();
    Student(std::string first, std::string last, int id, float avg);
    ~Student();
    std::string getFirst() const;
    std::string getLast() const;
    int getId() const;
    float getAvg() const;
    void print() const;

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

std::string Student::getFirst() const
{
    return m_first;
}

std::string Student::getLast() const
{
    return m_last;
}

int Student::getId() const
{
    return m_id;
}

float Student::getAvg() const
{
    return m_avg;
}

void Student::print() const
{
    std::cout << m_first << " " << m_last << " " << m_id << " " << m_avg << std::endl;
}

class Course
{
public:
    Course();
    Course(std::string name);
    ~Course();
    void addStudent(const Student& s);
    const std::vector<Student>& getStudents() const;
    void print() const;
    void loadFromFile(const std::string& filename);

private:
    std::string m_name = "Course";
    std::vector<Student> m_students;
};

Course::Course()
{
}

Course::Course(std::string name)
    : m_name(name)
{
}

Course::~Course()
{
}

void Course::addStudent(const Student& s)
{
    m_students.push_back(s);
}

const std::vector<Student>& Course::getStudents() const
{
    return m_students;
}

void Course::print() const
{
    for (const auto& s : m_students)
    {
        s.print();
    }
}

void Course::loadFromFile(const std::string& filename)
{
    std::ifstream fin(filename);
    std::string first, last;
    int id;
    float avg;

    while (fin >> first)
    {
        fin >> last >> id >> avg;

        addStudent(Student(first, last, id, avg));
    }
}

int main()
{
    Course c("COMP 4300");
    c.loadFromFile("Students.txt");
    c.print();

    return 0;
}
