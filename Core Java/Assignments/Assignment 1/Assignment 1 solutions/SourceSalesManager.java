class SalesManager{
 int id;
 String name;
 int salary;
 double incentive;
 int target;
 
 SalesManager()
 {
  System.out.println("In Default Constructor");
  this.id=105;
  this.name="Sheldon";
  this.salary=45000;
  this.incentive=12.5;
  this.target=145;
 }
 SalesManager(int id,String name,int salary,double incentive,int target)
 {
  System.out.println("In Parametarised Constructor");
  this.id=id;
  this.name=name;
  this.salary=salary;
  this.incentive=incentive;
  this.target=target;
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
 void setIncentive(double i)
 {
   this.incentive=i;
 }
 void setTarget(int t)
 {
   this.target=t;
 }
 void display()
 {
   System.out.println("ID is"+ id);
   System.out.println("Name is"+ name);
   System.out.println("Salary is"+ salary);
   System.out.println("Incentive s"+ incentive);
   System.out.println("Target is"+ target);
 }
int getId()
{
   return this.id;
}

int getSalary()
{
   return this.salary;
}

double getIncentive()
{
   return this.incentive;
}

int getTarget()
{
   return this.target;
}
}

class CheckSalesManager{
 public static void main(String[]args){
   SalesManager E1;
   E1= new SalesManager();
  /* E1.setId(101);
   E1.setName("Howard");
   E1.setSalary(67543);
   E1.setIncentive(25.3);
   E1.setTarget(75);*/
   E1.display();
  
   SalesManager E2;
   E2= new SalesManager(106,"Penny",35000,10.4,122);
   /*E2.setId(102);
   E2.setName("Raj");
   E2.setSalary(72000);
   E2.setIncentive(30.5);
   E2.setTarget(90);*/
   E2.display();

   /*if(E1.getId()>E2.getId())
   {
      System.out.println("E1 ID is Greater");
   }
   else
   {
      System.out.println("E2 ID is Greater");
   }

   if(E1.getSalary()>E2.getSalary())
   {
      System.out.println("E1 Salary is Higher");
   }
   else
   {
      System.out.println("E2 Salary is Higher");
   }

   if(E1.getIncentive()>E2.getIncentive())
   {
      System.out.println("E1 Incentive is Higher");
   }
   else
   {
      System.out.println("E2 Incentive is Higher");
   }

   if(E1.getTarget()>E2.getTarget())
   {
      System.out.println("E1 Target is Higher");
   }
   else
   {
      System.out.println("E2 Target is Higher");
   }*/

 }
}