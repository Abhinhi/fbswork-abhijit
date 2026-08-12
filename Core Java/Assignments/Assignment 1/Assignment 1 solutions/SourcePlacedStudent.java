class PlacedStudent{
   int frn;
   String studentName;
   int distanceCovered;
   String companyName;
   String designation;
   
   PlacedStudent()
   {
     System.out.println("In Default constructor");
     this.frn=121;
     this.studentName="Jay";
     this.distanceCovered=10;
     this.companyName="CFT";
     this.designation="Assistant";
    }
    
    PlacedStudent(int frn,String StudentName,int distanceCovered,String companyName,String designation)
   {
     System.out.println("In Parametarised constructor");
     this.frn=frn;
     this.studentName=studentName;
     this.distanceCovered=distanceCovered;
     this.companyName=companyName;
     this.designation=designation;
    }
   void setFrn(int frn)
   {
     this.frn=frn;
   }
   void setStudentName(String n)
   {
     this.studentName=n;
   }
   void setDistanceCovered(int d)
   {
     this.distanceCovered=d;
   }
   void setCompanyName(String cn)
   {
     this.companyName=cn;
   }
   void setDesignation(String d)
   {
     this.designation=d;
   }
   void display()
   {
     System.out.println("FRN is" + frn);
     System.out.println("Student Name is" + studentName);
     System.out.println("Distance Covered is" + distanceCovered);
     System.out.println("Company Name is" + companyName);
     System.out.println("Designation is" + designation);
   }
   int getFrn()
   {
     return this.frn;
   }

   int getDistanceCovered()
   {
     return this.distanceCovered;
   }
}

class CheckPlacedStudent{
   public static void main(String[]args){
      PlacedStudent p1,p2;
      p1=new PlacedStudent();
      /*p1.setFrn(121);
      p1.setStudentName("Lenord");
      p1.setDistanceCovered(12);
      p1.setCompanyName("ABC");
      p1.setDesignation("GET");*/
      p1.display();
      
      p2=new PlacedStudent(123,"Sofia",11,"WER","Senior");
      /*p2.setFrn(122);
      p2.setStudentName("Sheldon");
      p2.setDistanceCovered(18);
      p2.setCompanyName("XYZ");
      p2.setDesignation("Developer");*/
      p2.display();

      /*if(p1.getFrn()>p2.getFrn())
      {
         System.out.println("P1 FRN is Greater");
      }
      else
      {
         System.out.println("P2 FRN is Greater");
      }

      if(p1.getDistanceCovered()>p2.getDistanceCovered())
      {
         System.out.println("P1 Distance Covered is Greater");
      }
      else
      {
         System.out.println("P2 Distance Covered is Greater");
      }*/
}
}
