# include <stdio.h>
int main(){
int students,attendence,i,eligible=0,not_eligible=0;
float percentage,avg_attendence,total_avg_attendence;
printf("enter the number of students \n");
scanf("%d",&students);

for(i=1;i<=students;i++){
    printf("enter the attendenc of  students %d(out of 30)\n",i);
scanf("%d",&attendence);
percentage=(attendence/30.0)*100.0;

if(percentage>=75){
    printf("student %d: %.2f %%  - eligible\n",i,percentage);
eligible++;

}
else{
    printf("student %d:%.2f %% - not_eligible\n",i,percentage);
not_eligible++;
}
}

avg_attendence+=attendence/students;
total_avg_attendence+=(avg_attendence/30)*100.0;
printf("-------class summery-------\n");
printf("total number of student in class:%d\n",students);
printf("eligible %d\n",eligible);
printf("not_eligible %d\n",not_eligible);


printf("total average attendence is %f\n",total_avg_attendence);

return 0;
    

}