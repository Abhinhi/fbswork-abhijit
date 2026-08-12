class HR{
      
      int id;
      String name;
      int salary;
      int commission;
      
      HR()
      {
       System.out.println("In Default Constructor");
       this.id=104;
       this.name="Luke";
       this.salary=654321;
       this.commission=2500;
      }
      
      HR(int id,String name,int salary,int commission)
      {
       System.out.println("In Parametarised Constructor");
       this.id=id;
       this.name=name;
       this.salary=salary;
       this.commission=commission;
      }
      void setId(int id)
    {
      this.id=id;
     }
     void setName(String n)
    {
      this.name=n;
     }
    void setSalary(int s)
    {
      this.salary=s;
     }
    void setCommission(int c)
    {
      this.commission=c;
     }
    void display()
    {
      System.out.println("ID is " + id);
      System.out.println("Name is " + name);
      System.out.println("Salary is " + salary);
      System.out.println("Commission is " + commission);
     }
    int getId()
    {
      return this.id;
    }

    int getSalary()
    {
     return this.salary;
    }

    int getCommission()
    {
     return this.commission;
     }
}

class CheckHR{   
       public static void main(String[]args){
               HR e1;
               e1=new HR();
              /* e1.setId(102);
               e1.setName("Penny");
               e1.setSalary(98765);
               e1.setCommission(2500);*/
               e1.display();
              
               HR e2;
               e2=new HR(102,"manny",45000,1800);
              /* e2.setId(103);
               e2.setName("Leonard");
               e2.setSalary(85000);
               e2.setCommission(3000);*/
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
             }
            if(e1.getCommission()>e2.getCommission())
             {
               System.out.println("E1 Commission is Higher");
             }
           else
            {
              System.out.println("E2 Commission is Higher");
            }*/
 }
}