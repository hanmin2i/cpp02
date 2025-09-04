```meramid
classDiagram
    class Invoice {
        -int invoiceId
        -string companyName
        -string phoneNumber
        -Name customerName
        +Invoice(int id, string company, string phone, Name name)
        +add(int quantity, Product product)
        +print(Date date)
    }
    
    class Product {
        -string productName
        -double price
        +Product(string name, double price)
        +getName() string
        +getPrice() double
    }
    
    class Date {
        -int year
        -int month
        -int day
        +Date(int year, int month, int day)
        +getYear() int
        +getMonth() int
        +getDay() int
    }
    
    class Name {
        -string lastName
        -string firstName
        +Name(string last, string first)
        +getFullName() string
    }
    
    class Company {
        -string companyName
        -string address
        -string phone
        +Company()
        +getCompanyInfo() string
    }
    
    class Paper {
        -string paperType
        -string size
        +Paper()
        +getPaperInfo() string
    }
    
    %% 관계 정의
    Invoice *-- Name : "has-a (Composition)"
    Invoice o-- Product : "use-a (Aggregation)"
    Invoice ..> Date : "use-a (Dependency)"
    Invoice ..> Company : "use-a (Dependency)"
    Invoice ..> Paper : "use-a (Dependency)"