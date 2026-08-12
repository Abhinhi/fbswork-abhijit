class Employee{
 int id;
 String name;
 double salary;
 
 Employee()
{
System.out.println("In Default constructor");
 this.id=101;
 this.name="Alex";
 this.salary=65000;
}

 Employee(int id,String name,int salary)
{
System.out.println("In Parametarised constructor");
 this.id=id;
 this.name=name;
 this.salary=salary;
}

void setId(int id)
{
 this.id=id;
}
void setName(String ch)
{
 this.name=ch;
}
void setSalary(double s)
{
 this.salary=s;
}
void display()
{
 System.out.println("ID is " + id);
System.out.println("Name is " + name);
System.out.println("salary is " + salary);

}
int getId()
{
   return this.id;
}

double getSalary()
{
   return this.salary;
}
}

class CheckEmployee{
 public static void main(String[]args){
  Employee e1;
  e1=new Employee();
  /*e1.setId(101);
  e1.setName("Rohan");
  e1.setSalary(123000);*/
  e1.display();
  Employee e2;
  e2=new Employee(102,"Luke",45000);
  /*e2.setId(102);
  e2.setName("Peter");
  e2.setSalary(14556);*/
  e2.display();
  /*if(e1.getId()>e2.getId())
  {
     System.out.println("E1 ID is Greater");
  }
  else
  {
     System.out.println("E2 ID is Greater");
  }

  if(e1.getSalary()>e2.getSalary())
  {
     System.out.println("E1 Salary is Higher");
  }
  else
  {
     System.out.println("E2 Salary is Higher");
  }*/
    }
}