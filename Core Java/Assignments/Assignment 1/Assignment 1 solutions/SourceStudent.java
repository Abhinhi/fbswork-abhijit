class Student{
  int frn;
  String studentName;
  String distanceCovered;
  
  Student()
  {
   System.out.println("In Default Constructor");
   this.frn=1234;
   this.studentName="Ammy";
   this.distanceCovered="Two";
  }
  Student(int frn,String studentName,String distanceCovered)
  {
   System.out.println("In Parametarised Constructor");
   this.frn=frn;
   this.studentName=studentName;
   this.distanceCovered=distanceCovered;
  }
  void setFrn(int frn)
  {
    this.frn=frn;
  }
  void setStudentName(String n)
  {
    this.studentName=n;
  }
  void setDistanceCovered(String d)
  {
    this.distanceCovered=d;
  }
  void display()
  {
    System.out.println("FRN is" + frn);
    System.out.println("Student Name is" + studentName);
    System.out.println("distanceCovered is" + distanceCovered);
  }
  int getFrn()
{
   return this.frn;
}
}

class CheckStudent{
   public static void main(String[]args){
     Student s1,s2;
     s1=new Student();
     /*s1.setFrn(104);
     s1.setStudentName("Ammy");
     s1.setDistanceCovered("two");*/
     s1.display();

     s2=new Student(107,"Penny","Three");
     /*s2.setFrn(105);
     s2.setStudentName("Penny");
     s2.setDistanceCovered("three");*/
     s2.display();

     /*if(s1.getFrn()>s2.getFrn())
     {
        System.out.println("S1 FRN is Greater");
     }
     else
     {
        System.out.println("S2 FRN is Greater");
     }*/
   }
}