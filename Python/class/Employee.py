#Stephen Barton Jr 
#Python Classes, Employee
#25 APR 2019

class Employee:
    def __init__(self, name, ID, depart, job):
        self.__name = name
        self.__ID = ID
        self.__depart = depart
        self.__job = job
    
    def set_name(self, name):
        self.__name = name
 
    def set_ID(self, ID):
        self.__ID = ID
    
    def set_job(self, job):
        self.__job = job
    
    def set_depart(self, depart):
        self.__depart = depart
    
    def get_name(self):
        return self.__name
    
    def get_ID(self):
        return self.__ID

    def get_job(self):
        return self.__job

    def get_depart(self):
        return self.__depart

def main():
    name1 = "Susan Meyers"
    ID1 = "47899"
    depart1 = "Accounting"
    job1 = "Vice President"
    Person1 = Employee(name1, ID1, depart1, job1)

    name2 = "Mark Jones"
    ID2 = "39119"
    depart2 = "IT"
    job2 = "Programmer"
    Person2 = Employee(name2, ID2, depart2, job2)

    name3 = "Joy Rogers"
    ID3 = "81774"
    depart3 = "Manufacturing"
    job3 = "Engineer"
    Person3 = Employee(name3, ID3, depart3, job3)

    print("=============================================================================================")
    print("Name\t\t|\t ID Number\t|\t Department\t|\t Job Title")
    print("=============================================================================================")
    print(Person1.get_name(), "\t|\t", Person1.get_ID(), "\t\t|\t", Person1.get_depart(), "\t|\t", Person1.get_job())
    print(Person2.get_name(), "\t|\t", Person2.get_ID(), "\t\t|\t", Person2.get_depart(), "\t\t|\t", Person2.get_job())
    print(Person1.get_name(), "\t|\t", Person3.get_ID(), "\t\t|\t", Person3.get_depart(), "\t|\t", Person3.get_job())
    print("=============================================================================================")
main()